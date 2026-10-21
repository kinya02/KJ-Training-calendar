#pragma once
#include <QString>

class Exercise {
public:
    Exercise(const QString& name, const QString& muscleGroup)
        : m_name(name), m_muscleGroup(muscleGroup) {
    }
    virtual ~Exercise() = default;

    QString name() const { return m_name; }
    QString muscleGroup() const { return m_muscleGroup; }

    virtual QString type() const = 0;
    virtual QString describe() const { return m_name + " (" + m_muscleGroup + ")"; }

private:
    QString m_name;
    QString m_muscleGroup;
};