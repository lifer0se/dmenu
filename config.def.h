/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;
static int fuzzy = 1;
static const char *fonts[] = { "Roboto:style=Bold:size=13" };
static const char *prompt = NULL;
static int colorprompt = 0;
static unsigned int lineheight = 35;
static unsigned int min_lineheight = 35;

static const char col_gray1[] = "#2B2E37";
static const char col_gray2[] = "#555E70";
static const char col_gray3[] = "#747880";
static const char col_gray4[] = "#929AAD";
static const char col_cyan1[] = "#8BABF0";
static const char col_cyan2[]  = "#5294E2";
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_gray4, col_gray1 },
	[SchemeSel] = { col_gray1, col_cyan1 },
	[SchemeOut] = { col_gray2, col_gray1 },
};

static unsigned int lines = 0;
static const char worddelimiters[] = " ";
