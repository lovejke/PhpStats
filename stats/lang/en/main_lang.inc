<?php
// MENU DI AMMINISTRAZIONE
$admin_menu=Array(
// NOT CHANGE THIS ORDER
'main'=>'Main',
'details'=>'Visitors Details',
'reso'=>'Reso & Colors',
'os_browser'=>'Os & Browsers',
'systems'=>'Systems',
'pages'=>'Pages',
'percorsi'=>'Visitors path',
'time_pages'=>'Time Online',
'referer'=>'Referers',
'engines'=>'Search Engines',
'query'=>'Queries',
'searched_words'=>'Searched terms',
'ip'=>'IP',
'bw_lang'=>'Languages',
'hourly'=>'Hourly',
'daily'=>'Daily hits',
'weekly'=>'Weekly hits',
'monthly'=>'Monthly hits',
'calendar'=>'Calendar',
'compare'=>'Compare months',
'country'=>'Countries',
'links'=>'Links',
'downloads'=>'Downloads',
'clicks'=>'Clicks',
'trend'=>'Trend',
// END NOT CHANGE ORDER
'reset'=>'Reset',
'options'=>'Options',
'backup'=>'BackUp Database',
'restore'=>'Restore Database',
'esclusioni'=>'Esclusions',
'optimize_tables'=>'Optimize tables',
'update_def'=>'Update definitions',
'downadmin'=>'Downloads Admin',
'clicksadmin'=>'Clicks Admin',
'login'=>'<b>Login</b>',
'logout'=>'<b>Logout</b>',
'errorlogviewer'=>'Show error-log',
'modifyconfig'=>'Advanced Options',

// Voci di menu addizionali
'menu_general'=>'Main',
'menu_sistems'=>'Sistems',
'menu_engines'=>'Engines',
'menu_stats'=>'Hit Stats',
'menu_others'=>'Other Stats',
'menu_options'=>'Admin & Options');

// VOCI GENERALI
$string=Array(
'error'=>'<b>ERROR<b>',
'error_title'=>'Error',
'warning'=>'<b>WARNING<b>',
'information'=>'<b>Information</b>',
'visite'=>'Visitors',
'hits'=>'Hits',
'visite_no_spider'=>'Visitors without Search Engines',
'hits_no_spider'=>'Hits without Search Engines',
'visite_spider'=>'Search Engines',
'hits_spider'=>'Hits from Search Engines',
'unknown'=>'Unknown',
'insert_pass'=>'Insert your password:',
'login'=>'Login',
'login_title'=>'Login',
'logout'=>'Logout',
'logout_title'=>'Logout',
'logout_done'=>'<b>Log-out done.</b>',
'mode'=>'Show by <b>%tipo%</b>.',
'forgot_pass'=>'Forgot password?',
'forgot_pass_js_confirm'=>'Begin new password activation?',
'mail_sent_title'=>'New Password',
'mail_subject'=>'New Php-Stats password was request',
'mail_sent'=>'A new password has been sent at your e-mail address.<br>You have to confirm the passord to activate it.<br><br>See your mail for more infos.',
'mail_error'=>'Failed to send the new password, mail error.',
'new_pass_activ_title'=>'New password activation',
'new_pass_activ'=>'The new password sent in the mail is now active.',
'new_pass_error'=>'The activation key is not valid. The new password has not been activated.',
'go'=>'Go!',
'search'=>'Search for',
'printable'=>'Printable version',
'gen_on'=>'Generated by Php-Stats %php-stats-ver% on %data%.',

// Main page
'main_title'=>'Summary',
'db_status'=>'Database Status',
'table_name'=>'Table',
'db_status_size'=>'Size',
'db_status_recs'=>'Records',
'main_online_title'=>'<b>Currently online users details</b>',
'main_online_ip'=>'IP',
'main_online_url'=>'Current url',
'main_online_time'=>'Time',
'main_online_tracking'=>'T',
'main_sysinfo_title'=>'Server info',
'main_server_ws'=>'Webserver',
'main_server_os'=>'Operating System',
'main_server_php'=>'Php version',
'main_no_mysql_ver'=>'?',
'main_mysql_ver'=>'MySQL version',
'main_track_alt'=>'View all pages visited by this visitor',
'main_max_ol'=>'Top online users:<br>(%DATA% at %ORA%)',
'max_hits'=>'Best pages visited day (%NUM%)',
'min_hits'=>'Worst pages visited day (%NUM%)',
'sommario'=>'Summary',
'db_size'=>'<b>Used space: </b>',
'hits_tot'=>'<b>Total viewed pages</b>',
'visitors_tot'=>'<b>Total visitors</b>',
'main_tot_referer'=>'Total external referers',
'main_tot_engine'=>'Total search engines referers',
'main_tot_visits_spider'=>'Total search engines access',
'main_tot_hits_spider'=>'Total viewed pages from search engines',
//'main_tot_visits_nospider'=>'Total access without search engines',
//'main_tot_hits_nospider'=>'Total viewed pages without search engines',
'main_tot_direct'=>'Total direct visitors',
'hits_oggi'=>'<b>Today viewed pages</b>',
'visitors_oggi'=>'<b>Today visitors</b>',
'returns_oggi'=>'<b>Today returning visitors</b>',
'hits_ieri'=>'Yesterday viewed pages',
'visitors_ieri'=>'Yesterday visitors',
'hits_qm'=>'<b>This month viewed pages</b>',
'visitors_qm'=>'<b>This month visitors</b>',
'hits_sm'=>'Last month viewed pages',
'visitors_sm'=>'Last month visitors',
'hits_qa'=>'Viewed pages in %THIS_YEAR%',
'visitors_qa'=>'Visitators in %THIS_YEAR%',
'perm_site'=>'Time on site (average)',
'perm_page'=>'Time on each page (average)',
'usr_online'=>'<b>Users currently online</b>',
'hits_per_day'=>'Daily viewed pages (average)',
'visits_per_day'=>'Daily visitors (average)',
'pages_per_day'=>'Pages viewed per visitor (average)',
'stats_start'=>'Stats started on',
'average_user'=>'Average User',
'main_most_engine'=>'Most used engine',
'main_tot_extern'=>'Total visitors from Engines and referers',
'min_visits'=>'Worst visitors day (%NUM%)',
'max_visits'=>'Best visitors day (%NUM%)',


// Details page
'details_title'=>'Visitors details',
'details_os'=>'OS',
'details_browser'=>'Browser',
'details_reso'=>'Reso',
'details_ip'=>'IP',
'details_lang'=>'Language:',
'details_country'=>'Country:',
'details_server'=>'Host:',
'details_referer'=>'Referer:',
'details_ora'=>'Time',
'details_pageviewed'=>'Viewed pages [%VISITEDPAGES%]',
'details_returns'=>'Returns:',
'details_query'=>'Query:',
'details_down'=>'<i>Download: <b>%NAME%</b></i>',
'details_down_err'=>'<i>Error: id %ID% is unknown!</i>',
'details_click'=>'<i>Click: <b>%NAME%</b></i>',
'details_click_err'=>'<i>Error: id %ID% is unknown!</i>',
'details_isp'=>'ISP',
'details_connection'=>'Connection',
'details_descr'=>'Description',

// Browser and os page
'os_browser_title'=>'OS & Browsers',
'os_browser_title_2'=>'OS & Browsers (%MESE% %ANNO%)',
'browser_title'=>'Browsers',
'browser_title_2'=>'Browsers (%MESE% %ANNO%)',
'browser_bw'=>'Browser',
'browser_hits'=>'Hits',
'browser_unknown'=>'Others',
'os_title'=>'Operating Systems',
'os_title_2'=>'Operating Systems (%MESE% %ANNO%)',
'os_os'=>'Operating System',
'os_hits'=>'Hits',
'os_unknown'=>'Others',
'os_vis_mens'=>'Show by months',
'os_vis_glob'=>'Show all together',
'os_browser_titlea'=>'OS & Browsers by name',
'os_browser_title_2a'=>'OS & Browsers by name (%MESE% %ANNO%)',
'os_browser_titleb'=>'Browsers by macrocategory e OS by name',
'os_browser_title_2b'=>'Browsers by macrocategory e OS by name (%MESE% %ANNO%)',
'os_mode_0'=>'Don\'t group OS & Browsers',
'os_mode_1'=>'View OS & Browsers grouped by name',
'os_mode_2'=>'View Browsers grouped by macrocategory and OS grouped by name',
'os_mode_3'=>'Show total stats.',
'os_mode_4'=>'Show stats without Search Engines.',
'os_mode_5'=>'Show Search Engines stats.',

// Reso page
'reso_colo_title'=>'Screen Resolution & Color Depth',
'reso_colo_title_2'=>'Screen Resolution & Color Depth (%MESE% %ANNO%)',
'reso_title'=>'Screen Resolutions',
'reso_title_2'=>'Screen Resolutions (%MESE% %ANNO%)',
'reso_reso'=>'Resolution',
'reso_hits'=>'Hits',
'reso_altre'=>'Others',
'colo_title'=>'Colors Depth',
'colo_title_2'=>'Colors Depth (%MESE% %ANNO%)',
'colo_colo'=>'Depth',
'colo_hits'=>'Hits',
'colo_altre'=>'Others',
'reso_vis_mens'=>'View by months',
'reso_vis_glob'=>'View all',

// Systems Page
'systems_title'=>'Systems: Top 50',
'systems_title_2'=>'Systems: Top 50 (%MESE% %ANNO%)',
'systems_os'=>'Operating System',
'systems_bw'=>'Browser',
'systems_reso'=>'Reso',
'systems_colo'=>'Colors',

// Pagine
'pages_title'=>'Viewed Pages',
'pages_page'=>'Page',
'pages_hits'=>'Hits',
'pages_perc'=>'%',
'pages_in'=>'In',
'pages_out'=>'Out',
'pages_io'=>'I-O',
'pages_tracking'=>'T',
'pages_tracking_alt'=>'Show last hits chronology for this page',
'pages_delete'=>'X',
'pages_delete_alt'=>'Delete the page',
'pages_delete_confirm'=>'Do you want delete the page?',
'no_pages'=>'Sorry, no result for this query.',
'pages_results'=>'Search for: "<b>%query%</b>". Found <b>%trovati%</b> results. Hits for this query: <b>%hits%</b>.',
'pages_mode_0'=>'Show page urls.',
'pages_mode_1'=>'Show page titles.',
'pages_mode_2'=>'Show page url and titles.',
'pages_mode_3'=>'Show total stats.',
'pages_mode_4'=>'Show stats without Search Engines.',
'pages_mode_5'=>'Show Search Engines stats.',
'pages_string_mode_0'=>' included Search Engines',
'pages_string_mode_1'=>' excluded Search Engines',
'pages_string_mode_2'=>' Search Engines',

// Percorsi di visita
'percorsi_title'=>'Visitors path',
'percorsi_lev_1'=>'1st visited page (In page)',
'percorsi_lev_2'=>'2nd visited page',
'percorsi_lev_3'=>'3rd visited page',
'percorsi_lev_4'=>'4th visited page',
'percorsi_lev_5'=>'5th visited page',
'percorsi_lev_6'=>'6th visited page',
'percorsi_outs'=>'Last visited page (Out page)',
'percorsi_prob'=>'Recurrence',
'percorsi_hits'=>'Hits',
'percorsi_altre'=>'-<br>-<br>-<br><br>',
'percorsi_noresult'=>'Sorry, no page available for visitors path',

// Time online
'time_pages_title'=>'Permanence on pages',
'time_pages_url'=>'Url',
'time_pages_perm'=>'Time online',
'time_pages_tot'=>'Total',
'time_pages_range_title'=>'Permanence grouped by range',
'time_pages_range_total_visits'=>'Total hits',
'time_pages_range_range'=>'Range',
'time_pages_range_average'=>'Average',


// Pagine di errore
'error_pages_title'=>'Error Pages',
'error_pages_date'=>'Date',
'error_pages_page'=>'Referrer',
'error_pages_referrer'=>'Provenienza',
'error_pages_tipo'=>'Code',
'error_pages_errorcode'=>'Error Code',
'error_pages_delete'=>'X',
'error_pages_delete_alt'=>'Delete the page',
'error_pages_delete_confirm'=>'Do you want delete the page?',
'error_pages_global_title'=>'Global error stats',
'error_pages_TotalError'=>'Total Errors',
'error_pages_error'=>'Error',
'error_pages_noresult'=>'Sorry, no errors page available for this month',

// Referers
'refers_title'=>'External Referers',
'refers_title_2'=>'External Referers (%MESE% %ANNO%)',
'refers_group_title'=>'External referers by domains',
'refers_group_title_2'=>'External referers by domains (%MESE% %ANNO%)',
'refers_url'=>'Url',
'refers_date'=>'Last hit',
'refers_hits'=>'Hits',
'refers_tracking'=>'T',
'refers_delete'=>'X',
'refers_delete_alt'=>'Delete the page',
'refers_delete_confirm'=>'Do you want delete the page?',
'refers_url_1'=>'Domain',
'refers_date_1'=>'Last Accesses',
'refers_hits_1'=>'Accesses',
'refers_mode_0'=>'Don\'t group referers by domain',
'refers_mode_1'=>'Group referers by domain',
'refers_alt_1'=>'View referer chronology (from visitors details)',
'refers_alt_2'=>'View all referes from this domain.',
'alt_visitlink'=>'Visit referer url',

// Search engines
'se_title'=>'Search Engines',
'se_title_2'=>'Search Engines (%MESE% %ANNO%)',
'se_name'=>'Search Engine',
'se_hits'=>'Hits',
'se_query'=>'Query',
'se_page'=>'Page',
'se_details'=>'<b>Details:</b>',
'se_domain'=>'Country',
'se_expand_alt'=>'View query details',
'se_collapse_alt'=>'Toggle query details',
'se_unknown'=>'?',
'se_group_engines_domains'=>'Group by engine and country',
'se_group_engines'=>'Group by engine',
'se_group_domains'=>'Group by country',

// Query ai motori
'query_title'=>'Search Engine Queries',
'query_title_2'=>'Search Engine Queries (%MESE% %ANNO%)',
'query_mode_1'=>'Show query grouped by Search Engine',
'query_mode_2'=>'Show query altogether',
'query'=>'Query',
'query_hits'=>'Hits',
'query_engine'=>'Engine',
'query_vis_mens'=>'Show queries by months',
'query_vis_glob'=>'Don\'t show queries by months',
'query_last_m'=>'Hits last month: %HITS%',
'query_last_v'=>'Variation: %VARIAZIONE%',
'query_details'=>'<b>Details:</b>',
'query_expand_alt'=>'Show engines affected by this query.',
'query_collapse_alt'=>'Don\'t show engines affected by this query.',

// Parole cercate
'searched_words_title'=>'Most searched terms',
'searched_words_title_2'=>'Most searched terms (%MESE% %ANNO%)',
'searched_words_query_vis_mens'=>'Show terms by months',
'searched_words_query_vis_glob'=>'Don\'t show terms by months',
'searched_words_last_m'=>'Last month: %HITS%',
'searched_words_last_v'=>'Variation: %VARIAZIONE%',
'searched_word_most'=>'Most used query',
'searched_words_nogroup'=>'Don\'t group searched words?',
'searched_words_group'=>'Group searched words by similarity',


// Hourly
'hourly_title'=>'Hourly stats',
'hourly_title_2'=>'Hourly stats (%MESE% %ANNO%)',
'hourly_string_mode_0'=>' included Search Engines',
'hourly_string_mode_1'=>' excluded Search Engines',
'hourly_string_mode_2'=>' Search Engines',
'hourly_mode_0'=>'Show total stats.',
'hourly_mode_1'=>'Show stats without Search Engines.',
'hourly_mode_2'=>'Show Search Engines stats.',

// Weekly
'weekly_title'=>'Weekly stats',
'weekly_title_2'=>'Weekly stats (%MESE% %ANNO%)',
'weekly_day'=>'Day',
'weekly_hits'=>'Hits',
'weekly_vis_mens'=>'Show weekly stats by months',
'weekly_vis_glob'=>'Show weekly stats all together',
'weekly_string_mode_0'=>' included Search Engines',
'weekly_string_mode_1'=>' excluded Search Engines',
'weekly_string_mode_2'=>' Search Engines',
'weekly_mode_0'=>'Show total stats.',
'weekly_mode_1'=>'Show stats without Search Engines.',
'weekly_mode_2'=>'Show Search Engines stats.',

// Daily
'daily_title'=>'Last 30 days',
'daily_string_mode_0'=>' included Search Engines',
'daily_string_mode_1'=>' excluded Search Engines',
'daily_string_mode_2'=>' Search Engines',
'daily_mode_0'=>'Show total stats.',
'daily_mode_1'=>'Show stats without Search Engines.',
'daily_mode_2'=>'Show Search Engines stats.',

// Ultimi 12 mesi
'monthly_title'=>'Last 12 months',
'monthly_nome'=>'Month',
'monthly_hits'=>'Hits',
'monthly_string_mode_0'=>' included Search Engines',
'monthly_string_mode_1'=>' excluded Search Engines',
'monthly_string_mode_2'=>' Search Engines',
'monthly_mode_0'=>'Show total stats.',
'monthly_mode_1'=>'Show stats without Search Engines.',
'monthly_mode_2'=>'Show Search Engines stats.',

// Calendar
'calendar_title'=>'Calendar',
'calendar_view'=>'Show:',
'calendar_last'=>'Last 12 months',
'calendar_day_total'=>'Total',
'calendar_day_worst'=>'Worst',
'calendar_day_best'=>'Best',
'calendar_day_average'=>'Aver.',

// COMPARE
'compare_title'=>'Compare months',
'compare_comp'=>'Compare ',
'compare_with'=>' with ',
'compare_access'=>'Hits comparison',
'compare_visits'=>'Visitors comparison',
'compare_both'=>'Global Comparison',
'compare_hits'=>'Hits',
'compare_visites'=>'Visitors',
'compare_total'=>'Total',
'compare_string_mode_0'=>' included Search Engines',
'compare_string_mode_1'=>' excluded Search Engines',
'compare_string_mode_2'=>' Search Engines',
'compare_mode_0'=>'Show total stats.',
'compare_mode_1'=>'Show stats without Search Engines.',
'compare_mode_2'=>'Show Search Engines stats.',

// IP
'ip_title'=>'IP',
'ip'=>'IP',
'ip_last_visit'=>'Last access',
'ip_visite'=>'Visitors',
'ip_hits'=>'Hits',
'ip_tracking'=>'T',
'cercaip_title'=>'<b>IP address filter</b>',
'cercaip_filtra_from'=>'Filter from',
'cercaip_filtra_to'=>'to',
'cercaip_submit'=>'Go',
'cercaip_noresult'=>'No IP address found',
'cercaip_result'=>'IP adresses from',
'cercaip_check'=>'Started IP is greater of the ending IP',

// Paesi di provenienza
'continent_title'=>'Continents',
'country_title'=>'Countries',
'country'=>'Counry',
'country_hits'=>'Hits',
'country_visits'=>'Visitors',

// Lingue
'bw_lang_title'=>'Languages',
'bw_lang'=>'Language',
'bw_lang_hits'=>'Viewed pages',
'bw_lang_visits'=>'Visitors',

// TREND
'trend_title'=>'Trend',
'trend_day'=>'<b>Day</b>',
'trend_hits'=>'<b>Hits</b>',
'trend_visits'=>'<b>Visitors</b>',
'trend_nodaily'=>'<b>Sorry, for trend you must have at least 31 days as sample.</b>',

// Optimization
'optm_title'=>'Tables Optimization',
'optm_ok'=>'<b>Tables optimized successfully!</b>',
'optm_er'=>'<b>Error optimizing tables, tabels not optimized correctly.</b>',

// REFRESH
'refr_title'=>'Refresh referers - Search engines',
'refr_summary'=>'%analizzati% referers analyzed  (%rimossi% moved).',
'refr_next'=>'Next %HOWMANY% referers within 5 seconds (<a href="%URL%">or click here</a>)',
'refr_end'=>'Done.',
'refr_err'=>'Error moving:',

// EXCLUSIONS
'esclude_title'=>'Stats Exclusions',
'esclude_co_subtitle'=>'<b>Cookie based exclusion</b>',
'esclude_fol_subtitle'=>'<b>Folder and URL exclusion</b>',
'esclude_ips_subtitle'=>'<b>Static IP exclusion</b>',
'esclude_ipd_subtitle'=>'<b>Hostname exclusion</b>',
'esclude_status_of'=>'This PC is currently <b>included</b> in the stats.',
'esclude_status_on'=>'This PC is currently <b>excluded</b> from stats.',
'esclude_esc'=>'Click to exclude',
'esclude_inc'=>'Click to include',
'esclude_fol'=>'Folder and URL excluded:<br>(one for line, max 255 character total)',
'esclude_ip'=>'IP excluded:<br>(one for line, max 255 character total)',
'esclude_ips'=>'Static IP and ranges excluded:<br>(format of range: Ip1-Ip2 - one for line, max 255 charcters total)',
'esclude_ipd'=>'HOSTNAME excluded:<br>(tail of name - one per line, max 255 characters total)',
'esclude_salva'=>'Save',

// Reset page
'reset_title'=>'Reset',
'reset_done'=>'<b>Reset done.</b>',
'reset_err'=>'<b>WARNING:</b> nothing to reset!',
'reset_selall'=>'Select all',
'reset_desall'=>'Deselect all',
'reset_01'=>'Main Counters',
'reset_02'=>'Visitors Details',
'reset_03'=>'Operating Systems,Browsers,Reso and Colors',
'reset_04'=>'Languages',
'reset_05'=>'Viewed Pages',
'reset_06'=>'Time Online',
'reset_07'=>'Referers',
'reset_08'=>'Search Engines',
'reset_09'=>'Queries',
'reset_10'=>'Hourly Stats',
'reset_11'=>'Countries',
'reset_12'=>'Daily Stats',
'reset_13'=>'IP',
'reset_14'=>'Top online users value',
'reset_30'=>'Downloads',
'reset_31'=>'Clicks',
'reset_40'=>'Links',
'reset_do'=>'Reset',

// Unlock Pages
'unlock_pages_title'=>'Public Pages',
'unlock_pages_done'=>'<b>Update OK.</b>',
'unlock_pages_selall'=>'Select all',
'unlock_pages_desall'=>'Deselect all',
'unlock_pages_do'=>'Submit',

// Links
'links_title'=>'Links',
'links_title_2'=>'Links (%MESE% %ANNO%)',
'links_url'=>'URL',
'links_hits'=>'Hits',
'links_vis_mens'=>'Show stats by months',
'links_vis_glob'=>'Show stats all together',

// Downloads
'link_ok'=>'Ok',
'link_broken'=>'Broken link!',
'down_elenco_id'=>'id',
'link_not_checked'=>'Not checked link!',
'down_elenco_name'=>'Name',
'down_elenco_url'=>'Path',
'down_elenco_n'=>'Downloads',
'down_elenco_status'=>'S',
'down_edit'=>'Edit',
'down_del'=>'Delete',
'down_id'=>'Download id:',
'down_name'=>'Name:',
'down_desc'=>'Description',
'down_type'=>'Type:',
'down_home'=>'Home Page:',
'down_size'=>'Size:',
'down_url'=>'Path:',
'down_status'=>'Status:',
'down_notverify'=>'Not verified',
'down_date'=>'Created on:',
'down_title'=>'Downloads',
'down_count'=>'Downloads:',
'down_download'=>'Download',
'down_admin_title'=>'Downloads Admin',
'down_title_edit'=>'Edit download (id=%id%)',
'down_title_new'=>'New download',
'down_title_summary'=>'Summary:',
'down_salva'=>'Save',
'down_edit_ok'=>'<b>Changes successfully done.</b>',
'down_new_ok'=>'<b>New download successfully insered.</b>',
'down_delete_ok'=>'<b>Download deleted.</b>',
'down_codescript'=>'Example of html code for your pages',
'down_downcli'=>'Click on id for an example code.',
'down_js_confirm_del'=>'Delete download with id=%id% ?',
'down_js_confirm_reset'=>'Reset download with id=%id% ?',
'down_reset'=>'Reset',
'down_reset_ok'=>'<b>Download resetted.</b>',
'down_withinterface'=>'Use download interface:',
'down_yes'=>'yes',
'down_no'=>'no',

// Clicks
'click_stats_disabled'=>'<center><br><br>Sorry, service not available at this moment.<br><br>Please try again later.</center>',
'link_ok'=>'Ok',
'link_broken'=>'Broken link!!!',
'click_elenco_id'=>'id',
'click_elenco_name'=>'Name',
'click_elenco_url'=>'Path',
'click_elenco_n'=>'clicks',
'click_elenco_status'=>'S',
'click_edit'=>'Edit',
'click_del'=>'Delete',
'click_id'=>'"click" id:',
'click_name'=>'Name:',
'click_url'=>'Path:',
'click_status'=>'Status:',
'click_date'=>'Created on:',
'click_title'=>'Clicks',
'click_admin_title'=>'"Clicks" Administration',
'click_title_edit'=>'Edit "click" ( id=%id% )',
'click_title_new'=>'New "click"',
'click_title_summary'=>'<b>Summary:</b>',
'click_salva'=>'Save',
'click_edit_ok'=>'<b>Changes successfully done.</b>',
'click_new_ok'=>'<b>New download successfully insered.</b>',
'click_delete_ok'=>'<b>"click" deleted.</b>',
'click_codescript'=>'Example of html code for your pages',
'click_downcli'=>'Click on id for an example code.',
'click_js_confirm'=>'Delete click id=%id% , shure ?',

// Backup-Ripristino
'backup_title'=>'Backup/Ripristino',
'backup_backup'=>'<b>BackUp Database</b>',
'backup_cmp'=>'Compress',
'backup_with'=>'with',
'backup_without'=>'without',
'backup_mode'=>'Backup type',
'backup_mode_1'=>'Structure and Data',
'backup_mode_2'=>'Only Structure',
'backup_selall'=>'Select all',
'backup_desall'=>'Deselect all',
'backup_backup_go'=>'Start Backup',
'backup_restore'=>'<b>Restore Database</b>',
'backup_restore_desc'=>'Attach compress or sql file for restore',
'backup_restore_go'=>'Start Restore',
'backup_restore_success'=>'<b>Restore success!</b>',
'backup_restore_failure'=>'<b>ERROR</b>: Restore not done, some error happened.',
'backup_restore_diffver'=>'<b>ERROR</b>: The specified file is not a valid backup file.<br>(For example made on a different version of Php-Stats).',

// Export page
'export_title'=>'<b>Data Export Excel</b>',
'export_type'=>array(".xml - Excel"),
'export_text_01'=>'Insert range date or leave blank for all data',
'export_from'=>' From ',
'export_to'=>' To ',

// UPDATE DEF
'update_def_title'=>'Update definitions',
'update_def_file'=>'Definitions files',
'update_def_ver'=>'Vers.',
'update_def_date'=>'Date',
'update_def_check'=>'Check Definitions',
'update_def_avaible'=>'<b>Update avaible</b><br>Click here for update page.',
'update_def_ok'=>'<b>Not needed update</b>',
'update_def_ver_ok'=>'Update Status OK',
'update_def_ver_ko'=>'Update needed',
'update_def_ver_no'=>'Not verified status',

// CLEAR CACHE
'clear_cache_title'=>'Validating data cache...',
'clear_cache_start'=>'<br><br>Validating data cache... please wait.',
'clear_cache_done'=>'Data cache validated.',

// WHOIS
'whois_title'=>'IP Whois: %IP%',
'whois_result'=>'<b>IP Whois Results:</b>',
'whois_connecting'=>'Connecting to %SERVER%...<br><br>',
'whois_deferring'=>'Deferred to specific whois server: %SERVER%...<br><br>',
'whois_err_1'=>'Can\'t IP Whois without an IP address.',
'whois_err_2'=>'Timed-out or error connecting to %SERVER% (port 43)',

// WRONG PASSWORD
'wrong_pass_title'=>'Wrong password',
'wrong_pass'=>'<b>ERROR: wrong password!</b>',

// TIPS
'tips_cache_refresh_1'=>'<b>Tip:</b> Some information in this page don\'t comprise 1 data cache. If you want validate data cache now, <a href="javascript:clearcache(\'clear_cache.php\');">click here</a>.',
'tips_cache_refresh_2'=>'<b>Tip:</b> Some information in this page don\'t comprise %NUMCACHE% data cache. If you want validate data cache now, <a href="javascript:clearcache(\'clear_cache.php\');">click here</a>.',
'tips_update_availb'=>'<b>WARNING:</b> New Php-Stats version available! Update your Php-Stats.',
'tips_bcap_ini'=>'<b>WARNING:</b> Invalid <i>browscap/browscap.ini</i>!<br>Restored backup.',
'tips_bcap_cache'=>'<b>WARNING:</b> Invalid <i>browscap/cache.php</i>!<br>File deleted (will be rebuilt at the next visit).',

// ERRORLOG VIEWER
'viewerrlog_title'=>'Error-log viewer',
'viewerrlog_void'=>'<b>Error-log is empty: no error has accourred since last reset.</b>',
'viewerrlog_nr'=>'Error-log is not readable, maybe the file not exists or it is corrupted.',
'viewerrlog_nw'=>'Error-log exists but is read-only. Error-log must be a writable file.',
'viewerrlog_reset_error'=>'Error-log doesn\'t exists, is not writable or it cannot be created',
'viewerrlog_reset_done'=>'Error-log reset done.',
'viewerrlog_reset'=>'Reset error-log file',

// CONFIG.PHP EDITOR
'mod_config_title'=>'Config.php Editor',
'mod_config_nw'=>'config.php exists but is read-only. config.php must be a writable file.',
'mod_config_error'=>'Config.php, is not writable or it cannot be created',
'mod_config_error_option'=>'Not valid values',
'mod_config_done'=>'Config.php update done.',
'mod_config_modify'=>'Modify config.php file',
'mod_config_descr'=>Array(
'prefix'=>'Prefix for Php-Stats tables (default: php_stats)',
'callviaimg'=>'1: call Php-Stats by 1x1 pixel transparent image<br>0: by javascript',
'persistent_conn'=>'1: mySQL persistent connection<br>0: normal connection',
'autorefresh'=>'Minutes for admin\'s pages refresh',
'show_server_details'=>'1: show server details in main page<br>0: No',
'show_average_user'=>'1: show average user in main page<br>0: No',
'short_url'=>'1: show short url when possible<br>0: No',
'ext_whois'=>'For locked external connection, write:<br><i>http://www.yourwhois.com/adress?ip=%IP%</i><br>Change only yourwhois.com - NOT CHANGE %IP%',
'online_timeout'=>'Minutes for user online timeout<br>0: dinamic count',
'page_title'=>'1: Save page\'s title<br>0: No',
'refresh_page_title'=>'1: refresh page\'s title<br>0: No',
'log_host'=>'1: save hostname in details<br>0: No',
'clear_cache'=>'1: continous recognize cache (WARNING: SLOW!)<br>0: No',
'full_recn'=>'**DEPRECATED** 1: engines and refers recognizes at every page (WARNING: SLOW!)<br>0: No',
'logerrors'=>'1: save error in php-stats.log file<br>0: No',
'check_new_version'=>'1: check for php-stats new version<br>0: No',
'bcap_auto_update'=>'1: auto update browscap database (systems and browsers)<br>0: No',
'www_trunc'=>'1: change http://www. in http://<br>0: No',
'ip-zone'=>'1: recognize country from IP database<br>0: No',
'down_mode'=>'0: redirect<br>1: force download file<br>2: force download file altervista',
'check_links'=>'1: check the link<br>0: No',
//'ip_spam_filter'=>'1: enable IP spam filter from database (you must install)<br>0: No',
'link_logger'=>'1: enable link auto-stats for all links found in the page<br>0: No',
'keep_view_mode'=>'1: keep last view mode<br>0: No' ),

// FILTRATURA DATI
'rf_title'=>'Result filter',
'rf_browsers'=>'Browsers',
'rf_grabbers'=>'Grabbers',
'rf_spiders'=>'Spiders',
'rf_submit'=>'Submit',

// COPYRIGHT
'copyright'=>'');

// ERRORI
$error=Array(
'reso'=>'<b>Sorry, no resolutions details found.</b>',
'reso_2'=>'<b>Sorry, no resolutions details found in %MESE% %ANNO%.</b>',
'details'=>'<b>Sorry, no visitors details found.</b>',
'os_bw'=>'<b>Sorry, no details about Os and Browsers found.</b>',
'os_bw_2'=>'<b>Sorry, no details about Os and Browsers found in %MESE% %ANNO%.</b>',
'pages'=>'<b>Sorry, no page views found</b>',
'referer'=>'<b>Sorry, no external referer found.</b>',
'referer_2'=>'<b>Sorry, no external referer found in %MESE% %ANNO%.</b>',
'engines'=>'<b>Sorry, no search engines datails found.</b>',
'engines_2'=>'<b>Sorry, no search engines datails found in %MESE% %ANNO%.</b>',
'query'=>'<b>Sorry, no queries details found.</b>',
'query_2'=>'<b>Sorry, no queries details found in %MESE% %ANNO%.</b>',
'searched_words'=>'<b>Sorry no searched terms found.</b>',
'searched_words_2'=>'<b>Sorry no searched terms found in %MESE% %ANNO%.</b>',
'bad_pwd'=>'<b>Error: invalid password</b>',
'bw_lang_none'=>'<b>Sorry, no language details found.</b>',
'country'=>'<b>Sorry, no countries found.</b>',
'downloads'=>'<b>Sorry, no download found.</b>',
'clicks'=>'<b>Sorry, no monitored "click" at the moment.</b>',
'ip'=>'<b>Sorry, no IP found.</b>',
'pref_01'=>'<b>Passwod mismatch.</b>',
'pref_02'=>'<b>Invalid value for "keep details".</b>',
'pref_03'=>'<b>Invalid value for limiting records number.</b>',
'pref_04'=>'<b>Invalid value for starting hits.</b>',
'pref_05'=>'<b>Invalid value for starting visits.</b>',
'pref_06'=>'<b>Invalid value for timeout.</b>',
'pref_07'=>'<b>Iinvalid value for auto-optimization.</b>',
'exc_01'=>'<b>One or more ip addresses are not valid.</b>',
'exc_02'=>'<b>One or more ip ranges are not valid.</b>',
'exc_03'=>'<b>One or more dynamic ip addresses are in an invalid format.</b>',
'exc_04'=>'<b>One or more id of dynamic ips are not numbers.</b>',
'exc_05'=>'<b>One or more id of dynamic ips are greater than 99.</b>',
'links'=>'<b>Sorry, no links found.</b>',

// FATAL ERRORS
'critical_err'=>'<b>Call to undefinited func or syntax error inside it.</b>',
'no_connection'=>'ERROR connecting database.',
'file_down'=>'<b>ERROR</b>: That file [\'<b>%filename%</b>\'] is not available for download.',
'click_down'=>'<b>ERROR</b>: That url [\'<b>%filename%</b>\']  is not available at this moment.',
'down_noid'=>'<b>No available file for this id.</b>',
'down_errs_id'=>'<B>ERROR</B> Only numerically id is allowed.',
'click_noid'=>'<b>No available "click" for this id.</b>',
'click_errs_id'=>'<B>ERROR</B> Only numerically id is allowed.',
'down_url'=>'<b>Url cannot be empty!</b>',
'click_url'=>'<b>Url cannot be empty!</b>',
'down_no_update'=>'<b>No update done!</b>',
'click_no_update'=>'<b>No update done!</b>',
'down_no_delete'=>'<b>Error deleting id %id% .</b>',
'click_no_delete'=>'<b>Error deleting id %id% .</b>',
'error_decl'=>'<b>MySQL error:</b> %error%',
'upload_01'=>'<b>ERROR:</b> File not found or error uploading it.',
'upload_02'=>'<b>ERROR:</b> File not found on the server.<br>Make sure that file\'s size don\'t exceed the limit (usually 2MB)',
'upload_03'=>'<b>ERROR:</b> File isn\'t a valid Php-Stats backup file.<br>Make sure that is a <b>.sql</b> or <b>.gz</b> file.',
'upload_04'=>'<b>ERROR:</b> Error decompressing file. Make sure that zlib library is available');

// OPTIONS
$pref=Array(
'opzioni'=>'General settings',
'stats_disabled'=>'Php-Stats monitoring:',
'stats_disabled_yes'=>'Monitoring NOT Active',
'stats_disabled_no'=>'Monitoring Active',
'lang'=>'Language:',
'view'=>'Show:',
'view_1'=>'Nothing',
'view_2'=>'Visits',
'view_3'=>'Hits',
'cifre_1'=>'Least digits:',
'cifre_2'=>'(graphical mode only)',
'style_1'=>'Counter style:',
'style_2'=>'0123456789 <b>(Text-based counter)</b>',
'style_edit'=>'[Change style]',
'popup_select_tit'=>'Select counter style',
'pass_1'=>'New password',
'pass_2'=>' (Only if you want change it)',
'pass_3'=>'Re-type password',
'use_pass'=>'Use password:',
'unlocked_pages'=>'<b>Choice public pages</b>',
'zone_1'=>'Timezone:',
'zone_2'=>' (if your server has a different GTM)',
'site_name'=>'Site name:',
'site_url'=>'Site url:',
'script_url'=>'Php-Stats PRO url:',
'template'=>'Available skins:',
'si'=>'Yes',
'no'=>'No',
'salva'=>'Save',
'back'=>'Back',
'done'=>'<b>Changes successfully done.</b>',
'not_done'=>'<b>No changes done!</b>',
'startvisits'=>'Start visitors',
'starthits'=>'Start viewed pages',
'submitcode'=>'Generate code (and preview)',
'last_visit'=>'Last Visit',
'moduli_desc'=>'Activated features:',
'moduli_0'=>'Visitors Details',
'moduli_1'=>'Client infos (OS,Browser,Reso,Color depth)',
'moduli_1_m'=>'Allow monthly storage',
'moduli_2'=>'Client language',
'moduli_3'=>'Pages viewed, Time Online and Users online',
'moduli_3_m'=>'Activate max user online feature',
'moduli_4'=>'Referer and Search Engines',
'moduli_4_m'=>'Allow monthly storage for search engines',
'moduli_5'=>'Hourly',
'moduli_5_m'=>'Allow monthly storage',
'moduli_6'=>'Daily and Monthly',
'moduli_7'=>'Countries',
'moduli_8'=>'Downloads',
'moduli_9'=>'Clicks',
'moduli_10'=>'IP',
'moduli_11'=>'Enable Search Engines stats',
'user_mail'=>'Email address(es):<br>(one per line, max 255 total characters)',
'reportsent'=>'Send Report successfull',
'sendreporterror'=>'Send Report failed',
'sendreport'=>'Send now',
'pruning'=>'Pruning:',
'prune_0'=>'Keep details for %value% hours.',
'prune_1'=>'Autolimit "details" to %value% records.',
'prune_2'=>'Autolimit "ip" to %value% records.',
'prune_3'=>'Autolimit "query" to %value% records.',
'prune_4'=>'Autolimit "pages" to %value% records.',
'prune_5'=>'Autolimit "referer" to %value% records.',
'auto_optimize'=>'Auto optimize php-stats tables every %HITS% hits.',
'timeout'=>'Timeout:',
'ip_timeout'=>'Timeout to consider an IP as unique: %value% (hours)',
'page_timeout'=>'Timeout connection for pages: %value% (seconds)',
'report_title'=>'Reports',
'report_desc'=>'Send a a weekly report every: %day%',
'main_codescript'=>'Javascript to put in your pages in order to activate stats monitoring',
'codescript'=>'Javascript to put in your pages in order to view desidered stats',
'cs_view_0'=>'Online visitors',
'cs_view_1'=>'Visitors today',
'cs_view_2'=>'Viewed pages today',
'cs_view_3'=>'Total Visitors',
'cs_view_4'=>'Total viewed pages',
'cs_view_5'=>'Today returning visitors',
'cs_view_6'=>'Current page views',
'cs_mode'=>'What do you want to show?',
'cs_style'=>'With which style?',
'cs_style_defalut'=>'Default',
'cs_style_view'=>'[ View all styles ]',
'cs_digits'=>'Digits numeber (at least)?',
'cs_digits_default'=>'Default',
'preview_code'=>'Preview:',
'html_page_code'=>'HTML page',
'php_page_code'=>'PHP page stay in the same Php-Stats server<br><font color="red">(not recommended, will be removed in future versions)</font>',
'refresh'=>'Search engines refresh',
'refresh_desc'=>'Use this feature if you have changed search engine defs.<br><b>WARNING</b>: refresh cannot be undone.',
'refresh_go'=>'Refresh',
'download_staticjs'=>'Download static php-stats.js',
'download_staticjs_go'=>'Click for to download static php-stats.js file',
'write_staticjs'=>'Write static php-stats.js file',
'mode_type'=>'Php-Stats modality use',
'no_writeMode'=>'Currently you are using the no write files on server mode<br>For best performance you can set the permits 777 for option folder and then click on "Change mode" button',
'writeMode'=>'Currently you are using the write files on server mode',
'change'=>'Change mode',
'start_export'=>'Start Data Export');

// VARIE
$varie=Array(
'page_time'=>'Page loaded in %TOTALTIME% seconds',
'total_queries'=>'Queries done: %TOTALQUERIES%',
'server_time'=>'Server timestamp %SERVER_TIME%',
'date_format'=>'%mount% %day%, %year%',
'date_format_2'=>'%mount%, %year%',
'date_format_3'=>'%year%-%mount%-%day%', // compact mode
'perm_format'=>'%minutes%m:%seconds%s',
'perm_format_2'=>'%hours%h:%minutes%m:%seconds%s',
'time_format'=>'H:i:s', // PHP date() format
'days'=>array('Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday'),
'mounts'=>array('January','February','March','April','May','June','July','August','September','October','November','December'),
'mounts_1'=>array('Jan','Feb','Mar','Apr','May','Jun','Jul','Aug','Sep','Oct','Nov','Dec'),
'pag_x_y'=>'Page <b>%current%</b> of <b>%total%</b>',
'next'=>'[Next &gt;&gt;]',
'prev'=>'[&lt;&lt; Back]');

// TRACKING
$tracking=Array(
'title'=>'Data Tracking',
'pages'=>'<b>Hits chronology for:<br>%url%</b>',
'pages_date'=>'Date',
'pages_time'=>'Time',
'pages_ip'=>'IP',
'online'=>'<b>Other pages viewed by user on-line with IP %IP%</b><br>',
'online_time'=>'Time',
'online_url'=>'Page',
'online_err_nonoline'=>'<b>Sorry</b>: nobody is online with this IP.<br>Try the details page.',
'online_err_nopage'=>'<b>Sorry</b>: No pages found for user with this IP.',
'referer'=>'<b>Hits chronology from: <br>%URL%</b>',
'referer_date'=>'Date',
'referer_time'=>'Time',
'referer_ip'=>'IP',
'total'=>'%total% result(s) found.',
'fine'=>'<b>End tracking.</b>',
'noresult'=>'<b>Sorry:</b> No results.',
'domain_title'=>'<b>Rererers from %DOMAIN%</b>',
'domain_mese'=>'( <b>%MESE% %ANNO%</b> )',
'domain_url'=>'Visited page',
'domain_hits'=>'Hits',
'domain_err_nopage'=>'<b>Sorry</b>: Non referer for this domain.',
'close_window'=>'Close this window.');
?>