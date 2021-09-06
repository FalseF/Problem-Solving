class Solution {
public:
    vector<int> pathInZigZagTree(int label) {

        int N=label;

        int l=log2(N)+1;
   vector<int>vc;
   vc.push_back(N);
   int ck=0;
   for(int i=l;i>=2;i--)
   {
       if(i%2)
       {
           int ck1=abs(pow(2,i)-vc[ck++]+1)/2;
           int ck2=pow(2,i-1)/2+ck1-1;
           vc.push_back(ck2);
       }
       else{

            int ck1=abs(pow(2,i)-vc[ck++]+1)/2;
         int ck2=pow(2,i-1)/2+ck1-1;
           vc.push_back(ck2);


       }
   }
   reverse(vc.begin(),vc.end());
   return vc;

    }
};

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/

