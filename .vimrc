set nocompatible nu rnu mouse=a
filetype on
filetype plugin on
filetype indent on
syntax on

inoremap jj <ESC>

noremap 1 :set rnu!<ENTER>

nnoremap <c-s> :w<ENTER>

vnoremap ñ <ESC>:'<,'>s!^!//!<ENTER>
vnoremap ç <ESC>:'<,'>s!^//!!<ENTER>
