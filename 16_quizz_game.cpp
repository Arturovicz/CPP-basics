#include <iostream>
#include <cctype>

using std::string, std::cout, std::cin;

int main(int argc, char const *argv[])
{
    string questions[] = {"1. When is Hitler Birthday?",
                          "2. Where is Nicola Tesla from?",
                          "3. What is IMC Trading CEO's name?",
                          "4. Consent age in Pakistan?",
                          "5. Is earth flat?"};
    string options[5][4] = {{"(A) 24 April", "(B) 22 April", "(C) 10 April", "(D) 10 May"},
                            {"(A) USA", "(B) Albania", "(C) Serbia", "(D) Elon Musk's brain"},
                            {"(A) Valerij Arturovicz", "(B) Miguaz Karenovicz", "(C) Ashot Dumanyan", "(D) Batman"},
                            {"(A) 18", "(B) 21", "(C) 16", "(D) 13"},
                            {"(A) False", "(B) False", "(C) False?", "(D) Not True"}};
    char answers_comp[] = {'B', 'C', 'A', 'D', 'C'};

    int score = 0;
    char answers_user[5];
    char res;

    int rows = sizeof(options) / sizeof(options[0]);
    int cols = sizeof(options[0]) / sizeof(options[0][0]);

    cout << "***QUIZZ GAME***\n";
    cout << "FOR EACH QUESTION, INSERT A CHAR BETWEEN A and D\n";
    cout << "PRESS 'Q' TO END THE GAME\n";
    for (int i = 0; i < rows; i++)
    {
        cout << questions[i] << "\n";
        for (int j = 0; j < cols; j++)
        {
            cout << options[i][j] << ' ';
        }
        cout << '\n';
        cin >> res;
        res = toupper(res);
        if (res == 'Q')
        {
            break;
        }
        answers_user[i] = res;
        cout << '\n';
    }
    cout << "Processing..." << '\n';
    for (int i = 0; i < rows; i++)
    {
        if (answers_user[i] == answers_comp[i])
        {
            score += 1;
        }
    }
    cout << "Congrats, your score is " << score << '\n';

    return 0;
}
