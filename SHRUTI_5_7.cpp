#include<iostream>
using namespace std;
class LAND;
class TILES{
int l,w,area2;
public:
    void get_data(){
    cout<<"enter length of tile:";
    cin>>l;
    cout<<"enter width of tile:";
    cin>>w;
    area2=l*w;
    }

    void put_data(){
    cout<<"LENGTH OF TILE: "<<l<<endl;
    cout<<"WIDTH OF TILE: "<<w<<endl;
    cout<<"AREA 2: "<<area2<<endl;
    }

    void number_of_tile(LAND &L);
};

class LAND{
int length,width,area1;
public:
    void read_data(){
    cout<<"Enter length:";
    cin>>length;
    cout<<"Enter width:";
    cin>>width;
    area1=length*width;
    }

    void display_data(){
    cout<<"LENGHT: "<<length<<endl;
    cout<<"WIDTH: "<<width<<endl;
    cout<<"AREA 1: "<<area1<<endl;
    }

    friend void TILES::number_of_tile(LAND &);
};
void TILES::number_of_tile(LAND &L){
    int tiles;
    tiles=L.area1/area2;
    cout<<"REQUIRED TILES: "<<tiles<<endl;
    }
int main(){
LAND L;
TILES T;
L.read_data();
L.display_data();
T.get_data();
T.put_data();
T.number_of_tile(L);
return 0;
}
