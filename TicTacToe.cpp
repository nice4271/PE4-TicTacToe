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

void DisplayBoard(std::vector<std::vector<std::string>> matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::vector<std::vector<std::string>> matrix = CreateBoard();
    DisplayBoard(matrix);
}