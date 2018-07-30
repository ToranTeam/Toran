// Copyright (c) 2011-2013 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_ASKPASSTNXASEDIALOG_H
#define BITCOIN_QT_ASKPASSTNXASEDIALOG_H

#include <QDialog>

class WalletModel;

namespace Ui
{
class AskPassTNXaseDialog;
}

/** Multifunctional dialog to ask for passTNXases. Used for encryption, unlocking, and changing the passTNXase.
 */
class AskPassTNXaseDialog : public QDialog
{
    Q_OBJECT

public:
    enum Mode {
        Encrypt,         /**< Ask passTNXase twice and encrypt */
        UnlockAnonymize, /**< Ask passTNXase and unlock only for anonymization */
        Unlock,          /**< Ask passTNXase and unlock */
        ChangePass,      /**< Ask old passTNXase + new passTNXase twice */
        Decrypt          /**< Ask passTNXase and decrypt wallet */
    };

    explicit AskPassTNXaseDialog(Mode mode, QWidget* parent, WalletModel* model);
    ~AskPassTNXaseDialog();

    void accept();

private:
    Ui::AskPassTNXaseDialog* ui;
    Mode mode;
    WalletModel* model;
    bool fCapsLock;

private slots:
    void textChanged();

protected:
    bool event(QEvent* event);
    bool eventFilter(QObject* object, QEvent* event);
};

#endif // BITCOIN_QT_ASKPASSTNXASEDIALOG_H
