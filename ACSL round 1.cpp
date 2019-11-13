Dharshini Raman
//12-11-17 Period 4A
#include<iostream>
#include<iomanip>
using namespace std;
int cards(){

 int initialPoint=0;
    int c1;
    int c2;
    int c3;
    int c4;
    int c5;
    int c6;
    int c7;
    int d1;
    int d2;
    int d3;
    int pointTotal;
    int j;


    cin>>initialPoint>>c1>>c2>>c3>>c4>>d1>>c5>>d2>>c6>>d3>>c7;



    pointTotal = initialPoint;

    if (c1 == 9)
    {
        pointTotal = initialPoint;
        if(pointTotal > 99)
        {
            cout<<pointTotal + ", dealer"<<endl;
            return 0;
        }
    }
    else if(c1 == 4)
    {
        pointTotal = initialPoint - 10;
        if(pointTotal > 99)
        {
            cout<<pointTotal + " dealer"<<endl;
            return 0;
        }
    }

    else if(c1 == 0)
    {
        pointTotal = initialPoint + 11;
        if(pointTotal > 99)
        {
            pointTotal == pointTotal - 10;
            if(pointTotal > 99)
            {
                cout<<pointTotal<<", dealer"<<endl;
                return 0;
            }
        }

    }
    else
    {

        pointTotal = initialPoint + c1;
        // << typeid(c1).name() << c1<<endl;

        if(pointTotal > 99)
        {
            cout<<pointTotal<<", dealer"<<endl;
            return 0;
        }
    }



//cout << pointTotal << endl;

    if (d1 == 9)
    {
        pointTotal = pointTotal + 0;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", player"<<endl;
            return 0;
        }
    }
    else if(d1 == 4)
    {
        pointTotal = pointTotal - 10;


        if(pointTotal > 99)
        {
            cout<<pointTotal<<", player"<<endl;
            return 0;
        }
    }

    else if(d1 == 0)
    {
        pointTotal = pointTotal + 11;
        if(pointTotal > 99)
        {


            pointTotal = pointTotal - 10;
            if(pointTotal > 99)
            {
                cout<<pointTotal<<", dealer"<<endl;
                return 0;
            }
        }
    }
    else
    {

        pointTotal = pointTotal + d1;

        if(pointTotal > 99)
        {
            cout<<pointTotal<<", dealer"<<endl;
            return 0;
        }
    }


//cout << pointTotal << endl;
    if (c2 == 9)
    {
        pointTotal = pointTotal + 0;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", dealer"<<endl;
            return 0;
        }
    }
    else if(c2 == 4)
    {
        pointTotal = pointTotal - 10;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", dealer"<<endl;
            return 0;
        }
    }

    else if(c2 == 0)
    {
        pointTotal = pointTotal + 11;
        if(pointTotal > 99)
        {


            pointTotal = pointTotal - 10;
            if(pointTotal > 99)
            {
                cout<<pointTotal<<", dealer"<<endl;
                return 0;
            }
        }
    }
    else
    {

        pointTotal = pointTotal + c2;

        if(pointTotal > 99)
        {
            cout<<pointTotal<<", dealer"<<endl;
            return 0;
        }
    }


//cout << pointTotal << endl;
    if (d2 == 9)
    {
        pointTotal = pointTotal + 0;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", player"<<endl;
            return 0;
        }
    }
    else if(d2 == 4)
    {
        pointTotal = pointTotal - 10;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", player"<<endl;
            return 0;
        }
    }

    else if(d2 == 0)
    {
        pointTotal = pointTotal + 11;
        if(pointTotal > 99)
        {


            pointTotal = pointTotal - 10;
            if(pointTotal > 99)
            {
                cout<<pointTotal<<", player"<<endl;
                return 0;
            }
        }
    }
    else
    {

        pointTotal = pointTotal + d2;

        if(pointTotal > 99)
        {
            cout<<pointTotal<<", player"<<endl;
            return 0;
        }
    }

//cout << pointTotal << endl;
    if (c3 == 9)
    {
        pointTotal = pointTotal + 0;

        if(pointTotal > 99)
        {
            cout<<pointTotal<<", dealer"<<endl;
            return 0;
        }
    }
    else if(c3 == 4)
    {
        pointTotal = pointTotal - 10;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", dealer"<<endl;
            return 0;
        }
    }

    else if(c3 == 0)
    {
        pointTotal = pointTotal + 11;
        if(pointTotal > 99)
        {


            pointTotal = pointTotal - 10;
            if(pointTotal > 99)
            {
                cout<<pointTotal<<", dealer"<<endl;
                return 0;
            }
        }
    }
    else
    {

        pointTotal = pointTotal + c3;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", dealer"<<endl;
            return 0;
        }
    }

//cout << pointTotal << endl;

    if (d3 == 9)
    {
        pointTotal = pointTotal + 0;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", player"<<endl;
            return 0;
        }
    }
    else if(d3 == 4)
    {
        pointTotal = pointTotal - 10;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", player"<<endl;
            return 0;
        }
    }

    else if(d3 == 0)
    {
        pointTotal = pointTotal + 11;
        if(pointTotal > 99)
        {


            pointTotal = pointTotal - 10;
            if(pointTotal > 99)
            {
                cout<<pointTotal<<", player"<<endl;
                return 0;
            }
        }

    }
    else
    {

        pointTotal = pointTotal + d3;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", player"<<endl;
            return 0;
        }
    }

//cout << pointTotal << endl;
    if (c4 == 9)
    {
        pointTotal = pointTotal + 0;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", dealer"<<endl;
            return 0;
        }
    }
    else if(c4 == 4)
    {
        pointTotal = pointTotal - 10;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", dealer"<<endl;
            return 0;
        }
    }

    else if(c4 == 0)
    {
        pointTotal = pointTotal + 11;
        if(pointTotal > 99)
        {


            pointTotal = pointTotal - 10;
            if(pointTotal > 99)
            {
                cout<<pointTotal<<", dealer"<<endl;
                return 0;
            }
        }
    }
    else
    {

        pointTotal = pointTotal + c4;

        if(pointTotal > 99)
        {
            cout<<pointTotal<<", dealer"<<endl;
            return 0;
        }
    }

//cout << pointTotal << endl;
    if (c5 == 9)
    {
        pointTotal = pointTotal + 0;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", dealer"<<endl;
            return 0;
        }
    }
    else if(c5 == 4)
    {
        pointTotal = pointTotal - 10;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", dealer"<<endl;
            return 0;
        }
    }

    else if(c5 == 0)
    {
        pointTotal = pointTotal + 11;
        if(pointTotal > 99)
        {


            pointTotal = pointTotal - 10;
            if(pointTotal > 99)
            {
                cout<<pointTotal<<", dealer"<<endl;
                return 0;
            }
        }
    }
    else
    {

        pointTotal = pointTotal + c5;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", dealer"<<endl;
            return 0;
        }
    }

//cout << pointTotal << endl;
    if (c6 == 9)
    {
        pointTotal = pointTotal + 0;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", dealer"<<endl;
            return 0;
        }
    }
    else if(c6 == 4)
    {
        pointTotal = pointTotal - 10;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", dealer"<<endl;
            return 0;
        }
    }

    else if(c6 == 0)
    {
        pointTotal = pointTotal + 11;


        if(pointTotal > 99)
        {


            pointTotal = pointTotal - 10;

            if(pointTotal > 99)
            {
                cout<<pointTotal<<", dealer"<<endl;
                return 0;
            }
        }
    }
    else
    {

        pointTotal = pointTotal + c6;
        if(pointTotal > 99)
        {
            cout<<pointTotal<<", dealer"<<endl;
            return 0;
        }

    }
    cout<<pointTotal;




}

int main()
{


cards();

cards();

cards();

cards();

cards();


    return 0;
}
