/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Austin Mathew
 */


#ifndef MATHEW_COP3330_CH06_EX04_NAME_VALUE_H
#define MATHEW_COP3330_CH06_EX04_NAME_VALUE_H

class Name_value{
private:
    string name;
    int score;

public:

    Name_value(string name, int score){
        Name_value::name = name;
        Name_value::score = score;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Name_value::name = name;
    }

    int getScore() const {
        return score;
    }

    void setScore(int score) {
        Name_value::score = score;
    }
};

#endif //MATHEW_COP3330_CH06_EX04_NAME_VALUE_H
