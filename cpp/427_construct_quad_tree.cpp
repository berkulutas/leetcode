/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
bool isOK(vector<vector<int>>& grid, int starti, int startj, int size) {
    int start = grid[starti][startj];

    for (int i = starti; i<starti+size; i++) {
        for (int j = startj; j<startj+size; j++) {
            if (start != grid[i][j]) {
                return false; 
            }
        }
    }
    return true;
}


Node* constructRec(vector<vector<int>>& grid, int starti, int startj, int size) {
    if (isOK(grid, starti, startj, size)) {
        return new Node(grid[starti][startj], true);
    }
    else {
        Node* root = new Node(false, false);

        root->topLeft = constructRec(grid, starti, startj, size/2);
        root->topRight = constructRec(grid, starti, startj+size/2, size/2);
        root->bottomLeft = constructRec(grid, starti+size/2, startj, size/2);
        root->bottomRight = constructRec(grid, starti+size/2, startj+size/2, size/2);
        return root;
    }
}


Node* construct(vector<vector<int>>& grid) {
    return constructRec(grid, 0, 0, grid.size());
}
};