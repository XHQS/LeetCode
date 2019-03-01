class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> B(A);
        int i_num =  B.size(),j_num = B[0].size();
        for(int line = 0; line < i_num; line++) {
	        for(int i = 0,j = j_num - 1; j < i; i++,j--) {
	        	if(B[line][i] + B[line][j] == 0)
	        		B[line][i] = B[line][j] = 1;
	        	else if(B[line][i] + B[line][j] == 2)
	        		B[line][i] = B[line][j] = 0;
	        }
		}
		return B;
    }
};