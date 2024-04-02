void count(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    count(n-1);
}