#include <iostream>
#include <string>
using namespace std;
int a[5][5];
void tpel(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
void brdel_dzax(){
    for(int i=1;i<=4;i++){
        for(int j=2;j<=4;j++){
            if(a[i][j-1]==0){
                a[i][j-1]=a[i][j];
                a[i][j]=0;
            }
        }
    }
}
void brdel_aj(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=3;j++){
            if(a[i][j+1]==0){
                a[i][j+1]=a[i][j];
                a[i][j]=0;
            }
        }
    }
}
void brdel_nerqev(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=4;j++){
            if(a[i+1][j]==0){
                a[i+1][j]=a[i][j];
                a[i][j]=0;
            }
        }
    }
}
void brdel_verev(){
    for(int i=2;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(a[i-1][j]==0){
                a[i-1][j]=a[i][j];
                a[i][j]=0;
            }
        }
    }
}
void tanel_dzax(){
    brdel_dzax();
    brdel_dzax();
    brdel_dzax();
}
void tanel_aj(){
    brdel_aj();
    brdel_aj();
    brdel_aj();
}
void tanel_nerqev(){
    brdel_nerqev();
    brdel_nerqev();
    brdel_nerqev();
}
void tanel_verev(){
    brdel_verev();
    brdel_verev();
    brdel_verev();
}
void kpcnel_dzax(){
    for(int i=1;i<=4;i++){
        for(int j=2;j<=4;j++){
            if(a[i][j]==a[i][j-1]){
                a[i][j-1]*=2;
                a[i][j]=0;
            }
        }
    }
}
void kpcnel_aj(){
    for(int i=1;i<=4;i++){
        for(int j=3;j>=1;j--){
            if(a[i][j]==a[i][j+1]){
                a[i][j+1]*=2;
                a[i][j]=0;
            }
        }
    }
}
void kpcnel_nerqev(){
    for(int i=3;i>=1;i--){
        for(int j=1;j<=4;j++){
            if(a[i][j]==a[i+1][j]){
                a[i+1][j]*=2;
                a[i][j]=0;
            }
        }
    }
}
void kpcnel_verev(){
    for(int i=2;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(a[i][j]==a[i-1][j]){
                a[i-1][j]*=2;
                a[i][j]=0;
            }
        }
    }
}
void sarqel_dzax(){
    tanel_dzax();
    kpcnel_dzax();
    tanel_dzax();
}
void sarqel_aj(){
    tanel_aj();
    kpcnel_aj();
    tanel_aj();
}
void sarqel_nerqev(){
    tanel_nerqev();
    kpcnel_nerqev();
    tanel_nerqev();
}
void sarqel_verev(){
    tanel_verev();
    kpcnel_verev();
    tanel_verev();
}
int main(){
    for(int i=1;i<=4;i++)
        for(int j=1;j<=4;j++)
            cin>>a[i][j];
    int s;
    cin>>s;
    if(s==0)
        sarqel_dzax();
    if(s==2)
        sarqel_aj();
    if(s==1)
        sarqel_verev();
    if(s==3)
        sarqel_nerqev();
    tpel();
    return 0;
}
