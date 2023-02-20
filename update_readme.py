import os

# Define the path to the directory containing my LeetCode solutions
solutions_dir = 'cpp/'
# Define the path to the README file
readme_path = 'README.md'

# Read the current contents of the README file
with open(readme_path, 'r') as f:
    readme_contents = f.read()

start_index = readme_contents.index('|---|---|---|---|')
end_index = readme_contents.index('|---|---|---|---|', start_index+1)
table_contents = readme_contents[start_index:end_index]

# Split the table into rows
table_rows = table_contents.split('\n')[1:-1]

# Get a list of all the files in the solutions directory
solutions_files = os.listdir(solutions_dir)

# Filter the list of files to only include C++ source files
solutions_files = [f for f in solutions_files if f.endswith('.cpp')]

# Extract the problem number and title from each file name
solutions = []
for filename in solutions_files:
    number, title = filename.split('_', maxsplit=1)
    title = title[:-4].replace('_', ' ')
    link = f"[c++](https://github.com/berkulutas/leetcode/blob/main/cpp/{filename})"
    solutions.append((int(number), title, link))

# Sort the solutions list by problem number
solutions.sort()

present_problems = set()

# Update the table with any new solutions
new_table_rows = []
for (number, title, link) in solutions:
    row_found = False
    for row in table_rows:
        if f"| {number} |" in row:
            present_problems.add(number)
            new_table_rows.append(row+'\n')
            row_found = True
            break
    if not row_found:
        table_row = f"| {number} | {title} | {link} |  |\n"
        print(f"added problem {number}")
        new_table_rows.append(table_row)
        # present_problems.add(number)


# Combine the table rows into a single string
table = ''.join(new_table_rows)

# If all problems are already present in the table, do nothing
if present_problems == set([number for (number, title, link) in solutions]):
    print("All solutions are already present in the README file.")
else:
    # Replace the existing table with the new table
    new_readme_contents = readme_contents[:start_index] + '|---|---|---|---|\n' + table + readme_contents[end_index:]

    # Write the updated README file
    with open(readme_path, 'w') as f:
        f.write(new_readme_contents)
    
    print("The README file has been updated with new solutions.")