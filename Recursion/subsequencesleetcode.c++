void solve(string str,string output,int index,vector<string>& ans){
    if(index>=str.length()){
        if(output.lenth()>0){
        ans.push_back(output);}
        return;
    }
    
    solve(str,output,index+1,ans);
    
    char element = str[index];
    output.push_back(element);
    solve(str,output,index+1,ans);
}
vector<string> subsequences(string str){
    vector<string>ans;
    int index=0;
    string output="";
    solve(str,output,index,ans);
    return ans;
}