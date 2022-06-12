#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    string taxiText= "If you want to call a taxi, you should call:";
    string pizzaText="If you want to order a pizza, you should call:";
    string girlText="If you want to go to a cafe with a wonderful girl, you should call:";
    cin >> n;
    string names[n+1];
    int taxi[n+1];
    int pizza[n+1];
    int girl[n+1];
    for(int i=0; i<=n; i++){
        taxi[i]=0;
        pizza[i]=0;
        girl[i]=0;
    }
    int j;
    int maxTaxi;
    int maxPizza;
    int maxGirl;
    string numbers;

    for(int i=0; i<n; i++){
        cin >> j;
        cin >> names[i];
        for(int k=0; k<j; k++){
            cin>>numbers;
            if(numbers[0]==numbers[1] && numbers[1]==numbers[3] && numbers[1]==numbers[4] && numbers[1] && numbers[6] && numbers[1] == numbers[7]){
                taxi[i]++;
            }else if(numbers[0]>numbers[1] && numbers[1]>numbers[3] && numbers[3]>numbers[4] && numbers[4]>numbers[6] && numbers[6]>numbers[7]){
               pizza[i]++;
            }else{
                girl[i]++;
            }
        }

         maxTaxi= *max_element(taxi, taxi+n+1);
         maxPizza=  *max_element(pizza, pizza+n+1);
         maxGirl= *max_element(girl, girl+n+1);


    }
    bool printComma=false;
        for(int i=0; i<n; i++){
                if(taxi[i]==maxTaxi)
                    taxiText=taxiText+" "+names[i]+ ",";
                if(pizza[i]==maxPizza)
                   pizzaText=pizzaText+" "+names[i]+",";
                if(girl[i]==maxGirl)
                    girlText=girlText+" "+names[i]+",";
        }
        taxiText[taxiText.find_last_of(',')]='.';
        pizzaText[pizzaText.find_last_of(',')]='.';
        girlText[girlText.find_last_of(',')]='.';
        cout << taxiText << endl;
        cout << pizzaText << endl;
        cout << girlText << endl;

}
