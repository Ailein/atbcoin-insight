#ifndef BONUSCODETAB_H
#define BONUSCODETAB_H

#include "platformstyle.h"
#include <QWidget>
#include "walletmodel.h"

#include <QStandardItemModel>
#define KEY_TEMPLATE "3EIOPJ4A-JMWUIGPV-NR76TESB-UYWH1UJS-HWJOXSWK"
namespace Ui {
class BonusCodeTab;
}

class BonusCodeTab : public QWidget
{
    Q_OBJECT

public:
    explicit BonusCodeTab (WalletModel *wmodel, const PlatformStyle *platformStyle, QWidget *parent = 0);
    void setWalletModel(WalletModel *wmodel);
    ~BonusCodeTab();

private:
    Ui::BonusCodeTab *ui;
    WalletModel *wmodel; 
    const PlatformStyle *platformStyle;
    QStandardItemModel *model;
private Q_SLOTS:
    void updateBonusList();
    void getBonusClick(bool);
    void CreateClick(bool);
};

#endif // BONUSCODETAB_H
