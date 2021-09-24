#include <iostream>
#include <vector>

std::vector<std::vector<std::string>> CreateBoard()
{
    std::vector<std::vector<std::string>> ret{
        {"-", "-", "-"},
        {"-", "-", "-"},
        {"-", "-", "-"}};
    return ret;
}

void displayBoard(std::vector<std::vector<std::string>> V)
{
    for (int i = 0; i < V.size(); i++)
    {
        for (int j = 0; j < V[i].size(); j++)
        {
            std::cout << V[i][j];
        }
        std::cout << std::endl;
    }
    return;
}

void PlaceMarker(std::vector<std::vector<std::string>> &matrix, std::vector<int> choices, std::string turn)
{
    matrix[choices[0]][choices[1]] = turn;
}

std::vector<int> GetPlayerChoice()
{
    std::vector<int> ret;
    int x;
    std::cout << "Enter x value:";
    std::cin >> x;
    ret.push_back(x);
    std::cout << std::endl;
    int y;
    std::cout << "Enter y value:";
    std::cin >> y;
    ret.push_back(y);
    std::cout << std::endl;
    return ret;
}

int main()
{
    std::vector<std::vector<std::string>> matrix = CreateBoard();

    displayBoard(matrix);

    return 0;
}