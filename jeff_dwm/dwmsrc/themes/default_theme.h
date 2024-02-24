// Default Color Scheme
static const char col_gray1[] = "#44475a";
static const char col_gray2[] = "#282a36";
static const char col_gray3[] = "#f8f8f2";
static const char col_gray4[] = "#29292b";
static const char col_cyan[]  = "#9c98a3";

static const char *colors[][4] = {
	/*               fg         bg         border     float */
	[SchemeNorm] = { col_gray3, col_gray1, col_gray2, col_gray2 },
	[SchemeSel]  = { col_gray4, col_cyan,  col_gray2, col_cyan },

	// colorbar Patch
	[SchemeStatus]  	= { col_gray3, col_gray1,  "#000000"  }, // Statusbar right {text,background,not used but cannot be empty}
	[SchemeTagsSel]  	= { col_gray4, col_cyan,   "#000000"  }, // Tagbar left selected {text,background,not used but cannot be empty}
	[SchemeTagsNorm]  	= { col_gray3, col_gray1,  "#000000"  }, // Tagbar left unselected {text,background,not used but cannot be empty}
	[SchemeInfoSel]  	= { col_gray4, col_cyan,   "#000000"  }, // infobar middle  selected {text,background,not used but cannot be empty}
	[SchemeInfoNorm]  	= { col_gray3, col_gray1,  "#000000"  }, // infobar middle  unselected {text,background,not used but cannot be empty}
};
