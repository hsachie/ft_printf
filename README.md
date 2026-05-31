*This project has been created as part of the 42 curriculum by haruya.*

# ft_printf

C 標準ライブラリの `printf` 関数の再実装プロジェクトです。

## Description

`ft_printf` は `printf` の主要な変換指定子を再現した静的ライブラリです。可変長引数（`va_list`）を使用してフォーマット文字列を解析し、各指定子に応じた出力を行います。

### 対応している変換指定子

| 指定子 | 出力内容 |
|--------|----------|
| `%c` | 1文字 |
| `%s` | 文字列（NULL の場合は `(null)` を表示） |
| `%d` / `%i` | 符号付き10進整数 |
| `%u` | 符号なし10進整数 |
| `%x` | 符号なし16進数（小文字） |
| `%X` | 符号なし16進数（大文字） |
| `%p` | ポインタアドレス（`0x` プレフィックス付き） |
| `%%` | `%` 文字そのもの |

戻り値は出力した文字数。`write()` が失敗した場合は `-1` を返します。

### アルゴリズムとデータ構造

フォーマット文字列を1文字ずつ走査し、`%` を検出したら次の文字を `handle_format` 関数に渡して振り分けます。全ヘルパー関数に `int *count` ポインタを渡すことで、文字数の追跡とエラーの伝播を一元管理しています。数値出力には再帰関数を使用し、一時バッファなしで桁の取り出しを行っています。

## Instructions

### コンパイル

\`\`\`bash
make
\`\`\`

`libftprintf.a` がプロジェクトルートに生成されます。

### 使い方

\`\`\`bash
cc your_file.c -L. -lftprintf
./a.out
\`\`\`

ソースファイルの先頭に追加：

\`\`\`c
#include "ft_printf.h"
\`\`\`

### main 関数の例

\`\`\`c
#include "ft_printf.h"

int main(void)
{
    int count;

    ft_printf("char:     %c\n", 'A');
    ft_printf("string:   %s\n", "hello");
    ft_printf("int:      %d\n", 42);
    ft_printf("negative: %d\n", -42);
    ft_printf("unsigned: %u\n", 4294967295u);
    ft_printf("hex:      %x\n", 255);
    ft_printf("HEX:      %X\n", 255);
    ft_printf("pointer:  %p\n", (void *)&count);
    ft_printf("percent:  100%%\n");
    count = ft_printf("hello");
    ft_printf("\ncount: %d\n", count);
    return (0);
}
\`\`\`

### Makefile ルール

| ルール | 内容 |
|--------|------|
| `make` / `make all` | ライブラリをビルド |
| `make clean` | オブジェクトファイルを削除 |
| `make fclean` | オブジェクトファイルとライブラリを削除 |
| `make re` | 全て作り直し |

## リソースと AI の活用

### 参考文献

- [printf man page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [GNU libc — 可変長引数](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
- [42TokyoでprintfをC言語で1時間で書く（note）](https://note.com/sukesan1984/n/nd8381c32843b)
- 42 の各プロジェクト規定

### AI の使用について

AI（Perplexity）をデバッグ・概念理解・コードレビュー・Makefile 作成の補助として使用しました。構文エラーの特定や `va_list` の使い方の確認などに活用しています。最終的な提出コードの直接生成には使用していません。