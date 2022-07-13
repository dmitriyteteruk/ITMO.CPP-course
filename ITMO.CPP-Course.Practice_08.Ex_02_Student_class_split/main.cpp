/* main.cpp*/
#include <iostream>
#include <string>
#include <Windows.h>
#include "student.h"

using namespace std;

int main()
{
    // ðóññèôèêàöèÿ êîíñîëè
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string name;
    string last_name;
    // Ââîä èìåíè ñ êëàâèàòóðû
    cout << "Ââåäèòå èìÿ: ";
    std::cin >> name;
    // Ââîä ôàìèëèè
    cout << "Ââåäèòå ôàìèëèþ: ";
    std::cin >> last_name;
    // Ïåðåäà÷à ïàðàìåòðîâ êîíñòðóêòîðó
    Student* student02 = new Student(name, last_name);

    
    // Îöåíêè
    int scores[5];
    
    // Ñóììà âñåõ îöåíîê
    int sum = 0;
    
    // Ââîä ïðîìåæóòî÷íûõ îöåíîê
    for (int i = 0; i < 5; ++i) {
        cout << "Îöåíêà " << i + 1 << ": ";
        cin >> scores[i];
        // ñóììèðîâàíèå
        sum += scores[i];
    }
    
    // Ñîõðàíÿåì ïðîìåæóòî÷íûå îöåíêè â îáúåêò êëàññà Student
    student02->set_scores(scores);
    
    // Ñ÷èòàåì ñðåäíèé áàëë
    double average_score = sum / 5.0;
    
    // Ñîõðàíÿåì ñðåäíèé áàëë â îáúåêò êëàññà Student
    student02->set_average_score(average_score);
    
    // Âûâîäèì äàííûå ïî ñòóäåíòó
    cout 
        << "Ñðåäíèé áàëë äëÿ ñòóäåíòà " 
        << student02->get_name() 
        << " "
        << student02->get_last_name() 
        << " ðàâåí "
        << student02->get_average_score() 
        << "\n";
    
    // Óäàëåíèå îáúåêòà student èç ïàìÿòè_
    delete student02;
    return 0;

}
