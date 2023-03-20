#include "iostream"
#include "Question.h"
using namespace std;

void askQuestion(const Question &question, int &score)
{
    cout << question.getQuestion() << endl;
    cout << "1. " << question.getAnswer1() << endl;
    cout << "2. " << question.getAnswer2() << endl;
    cout << "3. " << question.getAnswer3() << endl;
    cout << "4. " << question.getAnswer4() << endl;
    int answer;
    cin >> answer;
    if (answer == question.getCorrectAnswer())
    {
        cout << "Correct!" << endl;
        score++;
    }
    else
    {
        cout << "Incorrect. The correct answer is " << question.getCorrectAnswer() << "." << endl;
    }
}

int main(int argc, char const *argv[])
{

    int score = 0;
    Question questions[10] = {
        Question("What is the capital of France?", "Paris", "London", "Berlin", "Madrid", 1),
        Question("What is the largest country by area?", "Russia", "Canada", "China", "USA", 1),
        Question("What is the tallest mammal?", "Giraffe", "Elephant", "Hippo", "Rhino", 1),
        Question("What is the largest planet in our solar system?", "Jupiter", "Saturn", "Uranus", "Neptune", 1),
        Question("What is the highest mountain in the world?", "Mount Everest", "K2", "Kangchenjunga", "Lhotse", 1),
        Question("What is the largest animal on Earth?", "Blue whale", "Elephant", "Giraffe", "Hippopotamus", 1),
        Question("What is the smallest country in the world?", "Vatican City", "Monaco", "Nauru", "San Marino", 1),
        Question("What is the smallest planet in our solar system?", "Mercury", "Venus", "Mars", "Earth", 1),
        Question("What is the most common gas in the Earth's atmosphere?", "Nitrogen", "Oxygen", "Carbon dioxide", "Argon", 1),
        Question("What is the largest desert in the world?", "Sahara", "Arabian", "Gobi", "Kalahari", 1)};

    for (Question question : questions)
    {
        askQuestion(question, score);
    }
    cout << "Your score is " << score << endl;
    return 0;
}