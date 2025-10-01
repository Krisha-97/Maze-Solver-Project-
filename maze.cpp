#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <string>
#include <random> 
#include<ctime> //For seeding the random number

struct Cell{  //to represent a single cell of maze
    int x,y;
    std::map<std::string, bool> walls;
    bool visited;

//Constructor to initialize the cell
Cell(int x_val, int y_val) : x(x_val), y(y_val), visited(false){
    walls["top"] = true;
    walls["right"] = true;
    walls["bottom"] = true;
    walls["left"] = true;
}
};

class Maze{
    public:
        int width, height;
        std::ve
}