# README

## 概要

- windows 環境で wsl を使わずに c++環境構築する
- ややこしい設定が少ない方法を探す　 ⇒ 　 scoop に行き着いた

## 初期構築

- scoop で gcc をインストール
- c/c++ configurations で以下を設定
  - Compiler path：C:/Users/fg250/scoop/apps/gcc/current/bin/g++.exe
  - intellisense: windows-gcc-x64
- 後は#include <bits/stdc++.h>のエラーなどでないはず

## 実行方法

- g++ a.cpp
- ./a.out
