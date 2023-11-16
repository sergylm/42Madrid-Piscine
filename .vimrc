set nocompatible nu rnu mouse=a
filetype on
filetype plugin on
filetype indent on
syntax on

inoremap jj <ESC>

noremap 1 :set rnu!<CR>

noremap <c-s> :w<CR>

"vnoremap ñ <ESC>:'<,'>s!^!//!<CR>
"vnoremap ç <ESC>:'<,'>s!^//!!<CR>

inoremap { {<CR>}<UP><c-o>$<CR>
inoremap ( ()<LEFT>
inoremap " ""<LEFT>
inoremap ' ''<LEFT>

vmap ç :call Toogle_comments()<CR>
nmap ç :call Toogle_comments()<CR>

command Comment call Toogle_comments()

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
