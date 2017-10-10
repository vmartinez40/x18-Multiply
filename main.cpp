/* Victor Martinez's Multiplication Table*/

#include<vector>
#include<iostream>


using namespace std;

int main()
{

vector < vector <int> > table;
table.resize(13);

//Reserves space for matrix
for(int row = 0;row<table.size();row++)
{
    table[row].resize(13);
}

//Fills first collumn with numbers from 1-12
for(int row = 1; row<table.size(); row++)
{
    table[row][0] = row;
}
//Fills first row with numbers from 1-12
for(int col = 1; col<table.size(); col++)
{
    table[0][col] = col;
}
//Multiply 
for(int row = 1; row<table.size(); row++)
{
    for(int col = 1; col<table.size(); col++)
    {
        table[row][col] = row * col;
    }
}
// Outputs Multiplication Table
for(int row = 0; row<table.size(); row++)
{
    for(int col = 0; col < table.size(); col++) 
    {
        cout<<table[row][col]<<"  |  ";
    }
    cout<<endl;
}
    return 0;
}
