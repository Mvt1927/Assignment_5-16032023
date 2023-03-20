#include "string"
using namespace std;

class Question
{
private:
    string question;
    string answer1;
    string answer2;
    string answer3;
    string answer4;
    int correctAnswer;

public:
    Question(const string &a_question, const string &a_answer1, const string &a_answer2, const string &a_answer3, const string &a_answer4, const int &a_correctAnswer);
    // Question();

    void setQuestion(const string &a_question);
    void setAnswer1(const string &a_answer1);
    void setAnswer2(const string &a_answer2);
    void setAnswer3(const string &a_answer3);
    void setAnswer4(const string &a_answer4);
    void setCorrectAnswer(const int &a_correctAnswer);

    string getQuestion() const;
    string getAnswer1() const;
    string getAnswer2() const;
    string getAnswer3() const;
    string getAnswer4() const;
    int getCorrectAnswer() const;
};

Question::Question(const string &a_question, const string &a_answer1, const string &a_answer2, const string &a_answer3, const string &a_answer4, const int &a_correctAnswer)
{
    question = a_question;
    answer1 = a_answer1;
    answer2 = a_answer2;
    answer3 = a_answer3;
    answer4 = a_answer4;
    correctAnswer = a_correctAnswer;
}

// Question::Question()
// {
//     question = "Test question: 1 + 1 =";
//     answer1 = "1";
//     answer2 = "2";
//     answer3 = "3";
//     answer4 = "4";
//     correctAnswer = 2;
// }

inline void Question::setQuestion(const string &a_question)
{
    question = a_question;
}

inline void Question::setAnswer1(const string &a_answer1)
{
    answer1 = a_answer1;
}

inline void Question::setAnswer2(const string &a_answer2)
{
    answer2 = a_answer2;
}

inline void Question::setAnswer3(const string &a_answer3)
{
    answer3 = a_answer3;
}

inline void Question::setAnswer4(const string &a_answer4)
{
    answer4 = a_answer4;
}

inline void Question::setCorrectAnswer(const int &a_correctAnswer)
{
    correctAnswer = a_correctAnswer;
}

inline string Question::getQuestion() const
{
    return question;
}

inline string Question::getAnswer1() const
{
    return answer1;
}

inline string Question::getAnswer2() const
{
    return answer2;
}
inline string Question::getAnswer3() const
{
    return answer3;
}
inline string Question::getAnswer4() const
{
    return answer4;
}

inline int Question::getCorrectAnswer() const
{
    return correctAnswer;
}
