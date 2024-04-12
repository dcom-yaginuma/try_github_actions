# try_github_actions
github actionsの動作確認用リポジトリ

# Actionsを用いたコードの矯正について
多くの些細なコードの指摘は受ける方にも指摘する方にも負荷がかかるため、これを機械的に自動化する事で軽減を試みる。

この方法として下記の２つの工程を導入する。

1. コード編集後はコミットする前に`run-clang-format.bat`を実行してコードのチェックを行う
2. Push時にGitHub Actionsにてコードのチェックを行う

# コードのチェック
`run-clang-format.bat`を実行してコーディングルールに沿わないコードがあった場合は、出力されたメッセージに沿って修正を行う

![image](https://github.com/dcom-yaginuma/try_github_actions/assets/7627846/ce6eb4f3-35b7-45ab-8954-36a9a977aa96)

# Actionsによるエラー
コードの修正を行わずにPushされた場合はActionsでエラーが吐かれる

<img width="698" alt="image" src="https://github.com/dcom-yaginuma/try_github_actions/assets/7627846/c2471217-e41e-4112-bd61-c7971e16b7fe">

# PusllRequestによる警告

この状態でPullRequestを送ろうとした場合もエラーが出る

![image](https://github.com/dcom-yaginuma/try_github_actions/assets/7627846/64270517-6c03-48db-bc1b-8b836c25fbbd)
