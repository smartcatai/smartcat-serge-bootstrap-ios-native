
common-settings
{
    job
    {
        source_process_subdirs                  NO

        # Map certain language codes to iOS/macOS-specific ones
        output_lang_rewrite
        {
            pt                                  pt-PT
            pt-br                               pt
            no                                  nb-NO
        }
    }

    strings
    {
        source_match                \.strings$

        parser
        {
            plugin                  parse_strings
        }

        output_bom                  YES
    }

    plist
    {
        source_match                \.plist$

        parser
        {
            plugin                  parse_plist
        }

        normalize_strings           YES
        output_bom                  YES
    }
}
