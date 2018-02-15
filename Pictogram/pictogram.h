#ifndef PICTOGRAM_H
#define PICTOGRAM_H

#include <QWidget>

#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>

#include <QPushButton>
#include <QGroupBox>
#include <QCheckBox>
#include <QRadioButton>

#include <QFileDialog>

#include <QProgressBar>

#include <QVBoxLayout>
#include <QHBoxLayout>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

class Pictogram : public QWidget
{
    Q_OBJECT
private:
    Pictogram* mainWindow;

    QVBoxLayout* mainLayout;

    QHBoxLayout* openFileLayout;
    QLabel* openFileLabel;
    QLineEdit* openFileLineEdit;
    QPushButton* openFilePushButton;
    QFileDialog* openFileDialog;

    QGroupBox* settingComboBox;
    QVBoxLayout* settingLayout;
    QRadioButton* globMethRadioButton;
    QRadioButton* localMethRadioButton;
    QCheckBox* setFuncCheckBox;
    QCheckBox* saveCheckBox;

    QHBoxLayout* setMaskLayout;
    QLabel* setMaskLabel;
    QSpinBox* setMaskSize;

    QHBoxLayout* setFuncLayout;
    QLabel* funcLable;
    QLineEdit* funcLineEdit;

    QHBoxLayout* saveFileLayout;
    QLabel* saveFileLabel;
    QLineEdit* saveFileLineEdit;
    QPushButton* saveFilePushButton;
    QFileDialog* saveFileDialog;

    QHBoxLayout* buttonsLauout;
    QPushButton* runPushButton;
    QPushButton* quitPushButton;

    QProgressBar* progrressBar;
    QLabel* progressLabel;

    void setMainWindow();
    void setOpenFile();
    void setComboBox();
    void setSetting();
    void setSaveFile();
    void setProcessPart();
    void setMainLayout();

public:
    explicit Pictogram(QWidget *parent = 0);
    ~Pictogram();

};

#endif // PICTOGRAM_H
