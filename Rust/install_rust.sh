#!/bin/zsh

curl https://sh.rustup.rs -sSf | sh
echo "export PATH=$PATH:$HOME/.cargo/bin" >> $HOME/.zshrc
