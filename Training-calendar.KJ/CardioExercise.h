#pragma once
#include "Exercise.h"

class CardioExercise : public Exercise {
public:
    CardioExercise(const QString& name, const QString& muscleGroup, int minutes)
        : Exercise(name, muscleGroup), m_minutes(minutes) {
    }

    QString type() const override { return "cardio"; }

    QString describe() const override
    {
        return Exercise::describe() + QString(": %1 min").arg(m_minutes);
    }

private:
    int m_minutes;
};