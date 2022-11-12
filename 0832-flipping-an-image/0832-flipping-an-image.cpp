class Solution {
public:
	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
		vector<vector<int>>v;
		for(int i=0; i<image.size(); i++){
			vector<int>temp;
			for(int j=0; j<image[0].size(); j++){
				temp.push_back(image[i][j]);
			}
			reverse(temp.begin(), temp.end());
			v.push_back(temp);
		}
		for(int i=0; i<v.size(); i++){
			for(int j=0; j<v[0].size(); j++){
				v[i][j]=!v[i][j];
			}
		}
		return v;
	}
};