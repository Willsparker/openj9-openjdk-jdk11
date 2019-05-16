/* == Start of generated functions == */
/*
 * The following functions are generated by running:
 *
 *   ./gen-vowel-constraints.py use Scripts.txt
 *
 * on files with these headers:
 *
 * # Copied from https://docs.microsoft.com/en-us/typography/script-development/use
 * # On October 23, 2018; with documentd dated 02/07/2018.
 *
 * # Scripts-11.0.0.txt
 * # Date: 2018-02-21, 05:34:31 GMT
 */

#include "hb-ot-shape-complex-vowel-constraints.hh"

static void
_output_dotted_circle (hb_buffer_t *buffer)
{
  hb_glyph_info_t &dottedcircle = buffer->output_glyph (0x25CCu);
  _hb_glyph_info_reset_continuation (&dottedcircle);
}

static void
_output_with_dotted_circle (hb_buffer_t *buffer)
{
  _output_dotted_circle (buffer);
  buffer->next_glyph ();
}

void
_hb_preprocess_text_vowel_constraints (const hb_ot_shape_plan_t *plan HB_UNUSED,
                                       hb_buffer_t              *buffer,
                                       hb_font_t                *font HB_UNUSED)
{
  /* UGLY UGLY UGLY business of adding dotted-circle in the middle of
   * vowel-sequences that look like another vowel.  Data for each script
   * collected from the USE script development spec.
   *
   * https://github.com/harfbuzz/harfbuzz/issues/1019
   */
  bool processed = false;
  buffer->clear_output ();
  unsigned int count = buffer->len;
  switch ((unsigned) buffer->props.script)
  {
    case HB_SCRIPT_DEVANAGARI:
      for (buffer->idx = 0; buffer->idx + 1 < count && buffer->successful;)
      {
        bool matched = false;
        switch (buffer->cur ().codepoint)
        {
          case 0x0905u:
            switch (buffer->cur (1).codepoint)
            {
              case 0x093Au: case 0x093Bu: case 0x093Eu: case 0x0945u:
              case 0x0946u: case 0x0949u: case 0x094Au: case 0x094Bu:
              case 0x094Cu: case 0x094Fu: case 0x0956u: case 0x0957u:
                matched = true;
                break;
            }
            break;
          case 0x0906u:
            switch (buffer->cur (1).codepoint)
            {
              case 0x093Au: case 0x0945u: case 0x0946u: case 0x0947u:
              case 0x0948u:
                matched = true;
                break;
            }
            break;
          case 0x0909u:
            matched = 0x0941u == buffer->cur (1).codepoint;
            break;
          case 0x090Fu:
            switch (buffer->cur (1).codepoint)
            {
              case 0x0945u: case 0x0946u: case 0x0947u:
                matched = true;
                break;
            }
            break;
          case 0x0930u:
            if (0x094Du == buffer->cur (1).codepoint &&
                buffer->idx + 2 < count &&
                0x0907u == buffer->cur (2).codepoint)
            {
              buffer->next_glyph ();
              buffer->next_glyph ();
              _output_dotted_circle (buffer);
            }
            break;
        }
        buffer->next_glyph ();
        if (matched) _output_with_dotted_circle (buffer);
      }
      processed = true;
      break;

    case HB_SCRIPT_BENGALI:
      for (buffer->idx = 0; buffer->idx + 1 < count && buffer->successful;)
      {
        bool matched = false;
        switch (buffer->cur ().codepoint)
        {
          case 0x0985u:
            matched = 0x09BEu == buffer->cur (1).codepoint;
            break;
          case 0x098Bu:
            matched = 0x09C3u == buffer->cur (1).codepoint;
            break;
          case 0x098Cu:
            matched = 0x09E2u == buffer->cur (1).codepoint;
            break;
        }
        buffer->next_glyph ();
        if (matched) _output_with_dotted_circle (buffer);
      }
      processed = true;
      break;

    case HB_SCRIPT_GURMUKHI:
      for (buffer->idx = 0; buffer->idx + 1 < count && buffer->successful;)
      {
        bool matched = false;
        switch (buffer->cur ().codepoint)
        {
          case 0x0A05u:
            switch (buffer->cur (1).codepoint)
            {
              case 0x0A3Eu: case 0x0A48u: case 0x0A4Cu:
                matched = true;
                break;
            }
            break;
          case 0x0A72u:
            switch (buffer->cur (1).codepoint)
            {
              case 0x0A3Fu: case 0x0A40u: case 0x0A47u:
                matched = true;
                break;
            }
            break;
          case 0x0A73u:
            switch (buffer->cur (1).codepoint)
            {
              case 0x0A41u: case 0x0A42u: case 0x0A4Bu:
                matched = true;
                break;
            }
            break;
        }
        buffer->next_glyph ();
        if (matched) _output_with_dotted_circle (buffer);
      }
      processed = true;
      break;

    case HB_SCRIPT_GUJARATI:
      for (buffer->idx = 0; buffer->idx + 1 < count && buffer->successful;)
      {
        bool matched = false;
        switch (buffer->cur ().codepoint)
        {
          case 0x0A85u:
            switch (buffer->cur (1).codepoint)
            {
              case 0x0ABEu: case 0x0AC5u: case 0x0AC7u: case 0x0AC8u:
              case 0x0AC9u: case 0x0ACBu: case 0x0ACCu:
                matched = true;
                break;
            }
            break;
          case 0x0AC5u:
            matched = 0x0ABEu == buffer->cur (1).codepoint;
            break;
        }
        buffer->next_glyph ();
        if (matched) _output_with_dotted_circle (buffer);
      }
      processed = true;
      break;

    case HB_SCRIPT_ORIYA:
      for (buffer->idx = 0; buffer->idx + 1 < count && buffer->successful;)
      {
        bool matched = false;
        switch (buffer->cur ().codepoint)
        {
          case 0x0B05u:
            matched = 0x0B3Eu == buffer->cur (1).codepoint;
            break;
          case 0x0B0Fu: case 0x0B13u:
            matched = 0x0B57u == buffer->cur (1).codepoint;
            break;
        }
        buffer->next_glyph ();
        if (matched) _output_with_dotted_circle (buffer);
      }
      processed = true;
      break;

    case HB_SCRIPT_TELUGU:
      for (buffer->idx = 0; buffer->idx + 1 < count && buffer->successful;)
      {
        bool matched = false;
        switch (buffer->cur ().codepoint)
        {
          case 0x0C12u:
            switch (buffer->cur (1).codepoint)
            {
              case 0x0C4Cu: case 0x0C55u:
                matched = true;
                break;
            }
            break;
          case 0x0C3Fu: case 0x0C46u: case 0x0C4Au:
            matched = 0x0C55u == buffer->cur (1).codepoint;
            break;
        }
        buffer->next_glyph ();
        if (matched) _output_with_dotted_circle (buffer);
      }
      processed = true;
      break;

    case HB_SCRIPT_KANNADA:
      for (buffer->idx = 0; buffer->idx + 1 < count && buffer->successful;)
      {
        bool matched = false;
        switch (buffer->cur ().codepoint)
        {
          case 0x0C89u: case 0x0C8Bu:
            matched = 0x0CBEu == buffer->cur (1).codepoint;
            break;
          case 0x0C92u:
            matched = 0x0CCCu == buffer->cur (1).codepoint;
            break;
        }
        buffer->next_glyph ();
        if (matched) _output_with_dotted_circle (buffer);
      }
      processed = true;
      break;

    case HB_SCRIPT_MALAYALAM:
      for (buffer->idx = 0; buffer->idx + 1 < count && buffer->successful;)
      {
        bool matched = false;
        switch (buffer->cur ().codepoint)
        {
          case 0x0D07u: case 0x0D09u:
            matched = 0x0D57u == buffer->cur (1).codepoint;
            break;
          case 0x0D0Eu:
            matched = 0x0D46u == buffer->cur (1).codepoint;
            break;
          case 0x0D12u:
            switch (buffer->cur (1).codepoint)
            {
              case 0x0D3Eu: case 0x0D57u:
                matched = true;
                break;
            }
            break;
        }
        buffer->next_glyph ();
        if (matched) _output_with_dotted_circle (buffer);
      }
      processed = true;
      break;

    case HB_SCRIPT_SINHALA:
      for (buffer->idx = 0; buffer->idx + 1 < count && buffer->successful;)
      {
        bool matched = false;
        switch (buffer->cur ().codepoint)
        {
          case 0x0D85u:
            switch (buffer->cur (1).codepoint)
            {
              case 0x0DCFu: case 0x0DD0u: case 0x0DD1u:
                matched = true;
                break;
            }
            break;
          case 0x0D8Bu: case 0x0D8Fu: case 0x0D94u:
            matched = 0x0DDFu == buffer->cur (1).codepoint;
            break;
          case 0x0D8Du:
            matched = 0x0DD8u == buffer->cur (1).codepoint;
            break;
          case 0x0D91u:
            switch (buffer->cur (1).codepoint)
            {
              case 0x0DCAu: case 0x0DD9u: case 0x0DDAu: case 0x0DDCu:
              case 0x0DDDu:
                matched = true;
                break;
            }
            break;
        }
        buffer->next_glyph ();
        if (matched) _output_with_dotted_circle (buffer);
      }
      processed = true;
      break;

    case HB_SCRIPT_BRAHMI:
      for (buffer->idx = 0; buffer->idx + 1 < count && buffer->successful;)
      {
        bool matched = false;
        switch (buffer->cur ().codepoint)
        {
          case 0x11005u:
            matched = 0x11038u == buffer->cur (1).codepoint;
            break;
          case 0x1100Bu:
            matched = 0x1103Eu == buffer->cur (1).codepoint;
            break;
          case 0x1100Fu:
            matched = 0x11042u == buffer->cur (1).codepoint;
            break;
        }
        buffer->next_glyph ();
        if (matched) _output_with_dotted_circle (buffer);
      }
      processed = true;
      break;

    case HB_SCRIPT_KHUDAWADI:
      for (buffer->idx = 0; buffer->idx + 1 < count && buffer->successful;)
      {
        bool matched = false;
        switch (buffer->cur ().codepoint)
        {
          case 0x112B0u:
            switch (buffer->cur (1).codepoint)
            {
              case 0x112E0u: case 0x112E5u: case 0x112E6u: case 0x112E7u:
              case 0x112E8u:
                matched = true;
                break;
            }
            break;
        }
        buffer->next_glyph ();
        if (matched) _output_with_dotted_circle (buffer);
      }
      processed = true;
      break;

    case HB_SCRIPT_TIRHUTA:
      for (buffer->idx = 0; buffer->idx + 1 < count && buffer->successful;)
      {
        bool matched = false;
        switch (buffer->cur ().codepoint)
        {
          case 0x11481u:
            matched = 0x114B0u == buffer->cur (1).codepoint;
            break;
          case 0x1148Bu: case 0x1148Du:
            matched = 0x114BAu == buffer->cur (1).codepoint;
            break;
          case 0x114AAu:
            switch (buffer->cur (1).codepoint)
            {
              case 0x114B5u: case 0x114B6u:
                matched = true;
                break;
            }
            break;
        }
        buffer->next_glyph ();
        if (matched) _output_with_dotted_circle (buffer);
      }
      processed = true;
      break;

    case HB_SCRIPT_MODI:
      for (buffer->idx = 0; buffer->idx + 1 < count && buffer->successful;)
      {
        bool matched = false;
        switch (buffer->cur ().codepoint)
        {
          case 0x11600u: case 0x11601u:
            switch (buffer->cur (1).codepoint)
            {
              case 0x11639u: case 0x1163Au:
                matched = true;
                break;
            }
            break;
        }
        buffer->next_glyph ();
        if (matched) _output_with_dotted_circle (buffer);
      }
      processed = true;
      break;

    case HB_SCRIPT_TAKRI:
      for (buffer->idx = 0; buffer->idx + 1 < count && buffer->successful;)
      {
        bool matched = false;
        switch (buffer->cur ().codepoint)
        {
          case 0x11680u:
            switch (buffer->cur (1).codepoint)
            {
              case 0x116ADu: case 0x116B4u: case 0x116B5u:
                matched = true;
                break;
            }
            break;
          case 0x11686u:
            matched = 0x116B2u == buffer->cur (1).codepoint;
            break;
        }
        buffer->next_glyph ();
        if (matched) _output_with_dotted_circle (buffer);
      }
      processed = true;
      break;

    default:
      break;
  }
  if (processed)
  {
    if (buffer->idx < count)
      buffer->next_glyph ();
    buffer->swap_buffers ();
  }
}

/* == End of generated functions == */
