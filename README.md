# CS / Low-Level Learning Notes

C、メモリ、Linux、アセンブリ、exploit development の基礎を、番号順の小さな課題として残すリポジトリです。

## 構成

- `N.md`: N番目の解説・課題・振り返り
- `N.c`: N番目の実験コード
- `build/`: ローカルで生成される実行ファイルとデバッグ情報（Git管理外）
- `.vscode/tasks.json`: VS Code のビルド設定

## ローカルでのビルドと実行

たとえば `3.c` をビルドする場合:

```sh
clang -std=c17 -Wall -Wextra -Wpedantic -g 3.c -o build/3
./build/3
```

VS Codeでは、Cファイルを開いて既定のビルドタスクを実行すると、同じく `build/` に実行ファイルが生成されます。

## 課題を追加するときの流れ

1. `N.md` と必要なら `N.c` を追加する。
2. `build/N` を実行し、挙動を確認する。
3. 変更を確認する。

   ```sh
   git status
   git diff
   ```

4. ソースとノートだけをコミットする。

   ```sh
   git add N.md N.c
   git commit -m "lesson N: <topic>"
   git push
   ```

`build/`、`.dSYM/`、オブジェクトファイルは `.gitignore` によりGitHubへ送られません。

## GitHub CI

GitHubへpushすると、`.github/workflows/c-build.yml` がリポジトリ直下の `*.c` を警告付きでコンパイルします。課題を増やしても、最低限「全コードがビルドできる」ことを自動確認できます。
