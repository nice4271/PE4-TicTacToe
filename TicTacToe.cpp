#include <iostream>
#include <vector>


std::vector<std::vector<std::string>> CreateBoard()
{
    std::vector<std::vector<std::string>> ret{
        {"-", "-", "-"},
        {"-", "-", "-"},
        {"-", "-", "-"}
    };
    return ret;
}


void displayBoard(std::vector<std::vector<std::string>> V){
    for(int i = 0; i < V.size(); i++){
        for(int j = 0; j < V[i].size(); j++){
            std::cout << V[i][j];
        }
        std::cout << std::endl;
    }
    return;
}

int main()
{
    std::vector<std::vector<std::string>> matrix = CreateBoard();

    displayBoard(matrix);

    return 0;
}