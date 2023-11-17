set nocompatible nu rnu mouse=a
filetype on
filetype plugin on
filetype indent on
syntax on

" Map jj in imode to swap to nmode 
imap jj <ESC>

" Map F1 to toogle relative numbers in all modes
nmap <F1> :set rnu!<CR>
imap <F1> <ESC><F1>i
vmap <F1> <ESC><F1><c-v>

" Map CTRL-S to save
nmap <C-S> :w<CR>

" Map Command-S to save in MAC
nmap <D-S> <C-S>

"vnoremap ñ <ESC>:'<,'>s!^!//!<CR>
"vnoremap ç <ESC>:'<,'>s!^//!!<CR>

" Automate open braces and duplicate symbols containers
inoremap { {<CR>}<UP><c-o>$<CR>
inoremap ( ()<LEFT>
inoremap " ""<LEFT>
inoremap ' ''<LEFT>

" Map to move tabs
nmap <F7> :tabp<CR>
imap <F7> <ESC><F7>i
vmap <F7> <ESC><F7><C-V>
nmap <F8> :tabn<CR>
imap <F8> <ESC><F8>i
vmap <F8> <ESC><F8><C-V>


" Map ç to toogle comments
noremap ç :call Toogle_comments()<CR>

" Function to toogle comments
function Toogle_comments()
	if Check_comment()
		call Uncomment(col("."))
	else
		call Comment(col("."))
	endif
endfunction

function Check_comment()
	let pos = col(".")
	call cursor(line("."), 1)
	let found = search("^//","c",line("."))
	call cursor(line("."), pos)
	return found
endfunction

function Uncomment(c_row)
	let l = line(".")
	let l_c = getline(l)
	let l_n = substitute(l_c,"^//","","")
	call setline(l, l_n)
	call cursor(l, a:c_row - 2)
endfunction

function Comment(c_row)
	let l = line(".")
	let l_n = "//" . getline(l)
	call setline(l, l_n)
	call cursor(l, a:c_row + 2)
	endfunction
