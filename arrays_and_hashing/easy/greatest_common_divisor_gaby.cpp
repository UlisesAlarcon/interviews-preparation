class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        int answerLength,length1=str1.length(),length2=str2.length();
        string answer="",a="",b="";
        answerLength=gcd(length1,length2);
        //cout<<"gcd:"<<answerLength<<endl;
        bool found=true;
        answer=str1.substr(0,answerLength);
        
        while(length1){
        //    cout<<answer<<endl;
            length1=length1-answerLength;
            a=a+answer;
        }

        while(length2){
        //    cout<<answer<<endl;
            length2=length2-answerLength;
            b=b+answer;
        }

        if(a==str1 and b==str2){
            return answer;
        }
        else{
            return "";
        }


    }
};





