// Copyright (c) 2011-2013 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_ASKPASSSLTCASEDIALOG_H
#define BITCOIN_QT_ASKPASSSLTCASEDIALOG_H

#include <QDialog>

class WalletModel;

namespace Ui
{
class AskPassSLTCaseDialog;
}

/** Multifunctional dialog to ask for passSLTCases. Used for encryption, unlocking, and changing the passSLTCase.
 */
class AskPassSLTCaseDialog : public QDialog
{
    Q_OBJECT

public:
    enum Mode {
        Encrypt,         /**< Ask passSLTCase twice and encrypt */
        UnlockAnonymize, /**< Ask passSLTCase and unlock only for anonymization */
        Unlock,          /**< Ask passSLTCase and unlock */
        ChangePass,      /**< Ask old passSLTCase + new passSLTCase twice */
        Decrypt          /**< Ask passSLTCase and decrypt wallet */
    };

    explicit AskPassSLTCaseDialog(Mode mode, QWidget* parent, WalletModel* model);
    ~AskPassSLTCaseDialog();

    void accept();

private:
    Ui::AskPassSLTCaseDialog* ui;
    Mode mode;
    WalletModel* model;
    bool fCapsLock;

private slots:
    void textChanged();

protected:
    bool event(QEvent* event);
    bool eventFilter(QObject* object, QEvent* event);
};

#endif // BITCOIN_QT_ASKPASSSLTCASEDIALOG_H
