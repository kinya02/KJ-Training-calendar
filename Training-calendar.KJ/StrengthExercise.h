#pragma once
#include "Exercise.h"

class StrengthExercise : public Exercise {
public:
    StrengthExercise(const QString& name, const QString& muscleGroup,
        int sets, int reps, double weightKg)
        : Exercise(name, muscleGroup), m_sets(sets), m_reps(reps), m_weightKg(weightKg) {
    }

    QString type() const override { return "strength"; }

    QString describe() const override
    {
        return Exercise::describe()
            + QString(": %1 x %2, %3 kg").arg(m_sets).arg(m_reps).arg(m_weightKg);
    }

private:
    int m_sets;
    int m_reps;
    double m_weightKg;
};