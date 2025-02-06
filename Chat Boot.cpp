#include<iostream>
#include<string>
using namespace std;

int main()
{
    string sentence;
    string Question[16];
    Question[0] = "what is your name";
    Question[1] = "your name";
    Question[2] =  "where do you live";
    Question[3] = "what are you doing";
    Question[4] = "who is your best friend";
    Question[5] = "hii how are you";
    Question[6] = "i hate you";
    Question[7] = "do you marry me";
    Question[8] = "are you married";
    Question[9] = "how old are you";
    Question[10] = "who is prime minister of india";
    Question[11] = "prime minister of india";
    Question[12] = "indian prime minister";
    Question[13] = "richest man of the world";
    Question[14] = "richest man of the india";
    Question[15] = "president of america";

     string Answer[16];
     Answer[0] = "My name Sri the chatbot,\n\n whats your name?";
     Answer[1] = "Sri the chatbot";
     Answer[2] = "bijuri, Madhya Pradesh\n\n and uou?";
     Answer[3] = "chating with you\n'n and you?";
     Answer[4] = "no one \n\n & your best friend?";
     Answer[5] = "i am fine \n\n & how are you?";
     Answer[6] = "bhag yaha se ?";
     Answer[7] = "bhag yaha se ! chochvi";
     Answer[8] = "no ! \n\n & you?";
     Answer[9] = "less than a year! \n\n & whats your age?";
     Answer[10] = "narendra modi";
     Answer[11] = "narendra modi";
     Answer[12] = "narendra modi";
     Answer[13] = "jeff bejosh";
     Answer[14] = "mukesh ambani";
     Answer[15] = "jo biden";

     do
     {
        cout<<"Enter a sentence or question: "<<end1;
        getline(cin,sentence);
        if (sentence.find("how")!=string::npos || sentence.find("what")!=string::npos ||sentence.find("who")!=string::npos || sentence.find("do")!=string::npos || sentence.find("are")!=string::npos |)
        {
            cout<<"Reply-->"<<end1;
        }

        int len = sentence.size();
        if (len>25)
        {
            cout<<"You are asking a lenthy question!"<<end1;
        }
        else if (len<6)
        {
            cout<<"ok"<<end1;
        }
        else if (len<4)
        {
            cout<<"Hellow"<<end1;
        }
        else if (sentence == Question[0])
        {
            cout<<Answer[0]<<end1;
        }
        else if (sentence == Question[1])
        {
            cout<<Answer[1]<<end1;
        }
        else if (sentence == Question[2])
        {
            cout<<Answer[2]<<end1;
        }
        else if (sentence == Question[3])
        {
            cout<<Answer[3]<<end1;
        }
        else if (sentence == Question[4])
        {
            cout<<Answer[4]<<end1;
        }
        else if (sentence == Question[5])
        {
            cout<<Answer[5]<<end1;
        }
        else if (sentence == Question[6])
        {
            cout<<Answer[6]<<end1;
        }
        else if (sentence == Question[7])
        {
            cout<<Answer[7]<<end1;
        }
        else if (sentence == Question[8])
        {
            cout<<Answer[8]<<end1;
        }
        else if (sentence == Question[9])
        {
            cout<<Answer[9]<<end1;
        }
       else if (sentence == Question[10])
        {
            cout<<Answer[10]<<end1;
        }
         else if (sentence == Question[11])
        {
            cout<<Answer[11]<<end1;
        }
         else if (sentence == Question[12])
        {
            cout<<Answer[12]<<end1;
        }
         else if (sentence == Question[13])
        {
            cout<<Answer[13]<<end1;
        }
        else if (sentence == Question[14])
        {
            cout<<Answer[14]<<end1;
        }
         else if (sentence == Question[15])
        {
            cout<<Answer[15]<<end1;
        }
         else if (sentence == Question[16])
        {
            cout<<Answer[16]<<end1;
        }

        cout<<"\n\n\t<<--------------------------------------------------------------->>"<<end1;
        cout<<"\t<<----------------Enter Exit to close discussion----------------->>"<<end1;
        cout<<"\t<<------------------------------------------------------------------->>"<<end1;













     } while (sentence!="exit" && sentence!="exit");
     

    return 0;
}