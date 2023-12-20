typedef enum {
  OM_COLOR_FORMAT_NONE = 0,
  OM_COLOR_FORMAT_RESET,
  OM_COLOR_FORMAT_BOLD,
  OM_COLOR_FORMAT_DARK,
  OM_COLOR_FORMAT_UNDERLINE,
  OM_COLOR_FORMAT_BLINK,
  OM_COLOR_FORMAT_REVERSE,
  OM_COLOR_FORMAT_CONCEALED,
  OM_COLOR_FORMAT_CLEAR_LINE,
  OM_COLOR_FORMAT_NUM
} om_color_format_t;

typedef enum {
  OM_COLOR_FONT_NONE = 0,
  OM_COLOR_FONT_BLACK,
  OM_COLOR_FONT_RED,
  OM_COLOR_FONT_GREEN,
  OM_COLOR_FONT_YELLOW,
  OM_COLOR_FONT_BLUE,
  OM_COLOR_FONT_MAGENTA,
  OM_COLOR_FONT_CYAN,
  OM_COLOR_FONT_WHITE,
  OM_COLOR_FONT_NUM
} om_color_font_t;

typedef enum {
  OM_COLOR_BACKGROUND_NONE = 0,
  OM_COLOR_BACKGROUND_BLACK,
  OM_COLOR_BACKGROUND_RED,
  OM_COLOR_BACKGROUND_GREEN,
  OM_COLOR_BACKGROUND_YELLOW,
  OM_COLOR_BACKGROUND_BLUE,
  OM_COLOR_BACKGROUND_MAGENTA,
  OM_COLOR_BACKGROUND_CYAN,
  OM_COLOR_BACKGROUND_WHITE,
  OM_COLOR_BACKGROUND_NUM
} om_color_background_t;

typedef enum {
  OM_COLOR_BOLD_NONE = 0,
  OM_COLOR_BOLD_YELLOW,
  OM_COLOR_BOLD_RED,
  OM_COLOR_BOLD_ON_RED,
  OM_COLOR_BOLD_NUM
} om_color_bold_t;

extern const char* OM_COLOR_FORMAT[];
extern const char* OM_COLOR_FONT[];
extern const char* OM_COLOR_BG[];
extern const char* OM_COLOR_BOLD[];