class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {   
        if(N == 0) return;
        else{
            
            printNos(N-1);
            cout << N << " ";
        }
        
    }
};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--)
    {
        int N;
        
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}