# try_github_actions
github actionsの動作確認用リポジトリ

# Actionsを用いたコードの矯正について
多くの些細なコードの指摘は受ける方にも指摘する方にも負荷がかかるため、これを機械的に自動化する事で軽減を試みる。

この方法として下記の２つの工程を導入する。

1. コード編集後はコミットする前に`run-clang-format.bat`を実行してコードのチェックを行う
   - コーディングルールに沿わないコードがあれば修正案のメッセージが出力される
   - 出力されたメッセージに沿ってコードを修正する
   - ![image](https://github.com/dcom-yaginuma/try_github_actions/assets/7627846/ce6eb4f3-35b7-45ab-8954-36a9a977aa96)

2. Push時にGitHub Actionsによってコードのチェックが行われる
   - コーディングルールに沿わないコードがあればAction実行結果がErrorとなる
   - <img width="698" alt="image" src="https://github.com/dcom-yaginuma/try_github_actions/assets/7627846/c2471217-e41e-4112-bd61-c7971e16b7fe">

