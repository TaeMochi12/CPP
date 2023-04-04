#include<iostream>
using namespace std ;
class shape{
    public:
float r;
float h;
float l;
float b;
    void volume(int x)
    {
        float v;
        r=x;
        v=(4/3)*(3.14)*r*r*r;
        cout<<"v="<<v<<endl;
    }
    void volume(int x,int y)
    {
        float v;
        r=x;
        h=y;
        v=(3.14)*r*r*h;
        cout<<"v="<<v<<endl;
    }
    void volume(int x,int y,int z)
    {
        float v;
        l=x;
        b=y;
        h=z;
        v=l*b*h;
        cout<<"v="<<v<<endl;
    }
};

int main() {
    shape s,cy,cu;
    cout<<"Sphere volume"<<endl;
    s.volume(2);
    cout<<"Cylinder volume"<<endl;
    cy.volume(2,4);
    cout<<"Cuboid volume"<<endl;
    cu.volume(2,4,1);


    return 0 ;
}