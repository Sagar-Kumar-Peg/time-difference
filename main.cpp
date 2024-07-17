//
//  main.cpp
//  papa's work
//
//  Created by Sagar Kumar on 17/07/24
//

#include <iostream>
#include<cstdlib>
using namespace std;
int main() {
    cout<<"Note:\nif anywhere you get .6 treat as 1 hr"<<endl<<"example: \t1.6 hr---> as 2 hrs\n\t 2.6 hrs---> as 3 hrs "<<endl<<endl<<"if you get a number with precission more than 2 decimal point round it to just immediate number"<<endl<<"this bug is due to insufficient ability of classical computers on operating with binary number and their conversion to their binary form for calculation"<<endl<<endl;
    float i=0,j=1,ans=0;
    int d;
    cout<<"enter day difference ";
    cin>>d;
    if(d==0){
        while(i<24.00&&j<24.00){
            cout<<"enter the first Number : ";
            cin>>i;
            cout<<"enter the second number : ";
            cin>>j;
            if((i-int(i)<0.6)&&(j-int(j))<0.6){
                if(j>i){
                    if((j-int(j))>=(i-int(i))){
                        ans=(j-i);
                        if((ans)<1){
                            ans=ans*100;
                            cout<<"your answer is: "<<ans<< " min"<<endl<<endl;
                        }
                        else{
                            cout<<"your answer is: "<<(ans)<<endl<<endl;
                        }
                    }
                    else{
                        ans=j-i-0.4;
                        if((ans)<1){
                            ans=ans*100;
                            cout<<"your answer is: "<<ans<< " min"<<endl<<endl;
                        }
                        else{
                            cout<<"your answer is: "<<(ans)<<endl<<endl;
                        }
                    }
                }
                else{
                    if((j-int(j))<=(i-int(i))){
                        ans=(i-j);
                        if((ans)<1){
                            ans=ans*100;
                            cout<<"your answer is: "<<ans<< " min"<<endl<<endl;
                        }
                        else{
                            cout<<"your answer is: "<<(ans)<<endl<<endl;
                        }
                    }
                    else{
                        ans=i-j-0.4;
                        if((ans)<1){
                            ans=ans*100;
                            cout<<"your answer is: "<<ans<< " min"<<endl<<endl;
                        }
                        else{
                            cout<<"your answer is: "<<(ans)<<endl<<endl;
                        }
                    }
                }
            }
        }
    }
                
                if(d==1){
                    while(i<24.00&&j<24.00&&i!=j){
                        cout<<"enter the number of 1st day : ";
                        cin>>i;
                        cout<<"enter the second number of next day : ";
                        cin>>j;
                        ans=(24.00-i+j); //we can use the concept of subtraction 24.00-i and
                        if((j-int(j))>=(i-int (i))){//and then concept of addition with j
                            if((ans)<1){  //or in simple way do subtraction concept with j-i
                                ans=ans*100;//and simple algebraic adddition with 24.00
                                cout<<"your answer is: "<<ans<< " min"<<endl<<endl;
                            }
                            else{
                                cout<<"your answer is: "<<ans<<endl<<endl;
                            }
                        }
                        else{
                            ans=ans-0.400;
                            if((ans)<1){
                                ans=ans*100;
                                cout<<"your answer is: "<<ans<< " min"<<endl<<endl;
                            }
                            else{
                                cout<<"your answer is: "<<ans<<endl<<endl;
                            }
                        }
                    }
                }
                return 0;
            }

