#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //hibás hivatkozas (NELEMENTS)
    std::cout << "1-100 ertekek duplazasa"; //hianyzo ;, idezojel
    for (int i = 0; i < N_ELEMENTS; i++) //hianyzo primary expression
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) //hianyzo loop condition
    {
        std::cout << "Ertek:" << b[i] << std::endl; //nem irja ki az erteket + hianyzo ;
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i]; //hianyzo ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b;
    return 0; //memoriaterulet nem szabadul fel
}
