class Solution {
public:
    
    
 
    
    bool isValidSudoku(vector<vector<char>>& board) {
  set<string>st;  
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            char x=board[i][j];
            if(x!='.')//if element is a number
            {
                int boxIndex=(i/3)*3+(j/3);//finding index of box from row and column of an element
                string res1="row"+to_string(i)+to_string(x);
                string res2="col"+to_string(j)+to_string(x);
                string res3="box"+to_string(boxIndex)+to_string(x);

                if(st.find(res1)!=st.end())//checking row + row index + element in set
                    return false;
                if(st.find(res2)!=st.end())//checking column + column index + element in set
                    return false;
                if(st.find(res3)!=st.end())//checking box + box index + element in set
                    return false;
                
                //adding elements in a set otherwise
                    st.insert(res1);
                    st.insert(res2);   
                    st.insert(res3); 
            }
        }
    }
    return true;//return true if not found duplicate by above find function
    
   }
};