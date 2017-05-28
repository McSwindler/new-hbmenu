#include "strings.h"

#define STR_JP(_str) [CFG_LANGUAGE_JP] = _str
#define STR_EN(_str) [CFG_LANGUAGE_EN] = _str
#define STR_FR(_str) [CFG_LANGUAGE_FR] = _str
#define STR_DE(_str) [CFG_LANGUAGE_DE] = _str
#define STR_IT(_str) [CFG_LANGUAGE_IT] = _str
#define STR_ES(_str) [CFG_LANGUAGE_ES] = _str
#define STR_ZH(_str) [CFG_LANGUAGE_ZH] = _str
#define STR_KO(_str) [CFG_LANGUAGE_KO] = _str
#define STR_NL(_str) [CFG_LANGUAGE_NL] = _str
#define STR_PT(_str) [CFG_LANGUAGE_PT] = _str
#define STR_RU(_str) [CFG_LANGUAGE_RU] = _str
#define STR_TW(_str) [CFG_LANGUAGE_TW] = _str

const char* const g_strings[StrId_Max][16] =
{
	[StrId_Loading] =
	{
		STR_EN("Loading…"),
		STR_ES("Cargando…"),
		STR_DE("Lade…"),
		STR_FR("Chargement…"),
		STR_IT("Caricamento…"),
		STR_JP("ロード中…"),
		STR_PT("Carregando…"),
		STR_NL("Laden…"),
		STR_KO("로딩중…"),
		STR_RU("загрузка…"),
	},

	[StrId_Directory] =
	{
		STR_EN("Directory"),
		STR_ES("Carpeta"),
		STR_DE("Verzeichnis"),
		STR_FR("Dossier"),
		STR_IT("Cartella"),
		STR_JP("フォルダ"),
		STR_PT("Directório"),
		STR_NL("Map"),
		STR_KO("디렉토리"),
		STR_RU("каталог"),
	},

	[StrId_DefaultLongTitle] =
	{
		STR_EN("Homebrew application"),
		STR_ES("Aplicación homebrew"),
		STR_DE("Homebrew-Anwendung"),
		STR_FR("Application homebrew"),
		STR_IT("Applicazione homebrew"),
		STR_JP("自作アプリ"),
		STR_PT("Aplicação Homebrew"),
		STR_NL("Homebrew toepassing"),
		STR_KO("홈브류 애플리케이션"),
		STR_RU("приложение хомебреw"),
	},

	[StrId_DefaultPublisher] =
	{
		STR_EN("Unknown author"),
		STR_ES("Autor desconocido"),
		STR_DE("Unbekannter Autor"),
		STR_FR("Auteur inconnu"),
		STR_IT("Autore sconosciuto"),
		STR_JP("未知の作者"),
		STR_PT("Autor Desconhecido"),
		STR_NL("Auteur onbekend"),
		STR_KO("작자미상"),
		STR_RU("неизвестный автор"),
	},

	[StrId_IOError] =
	{
		STR_EN("I/O Error"),
		STR_ES("Error de E/S"),
		STR_DE("E/A-Fehler"),
		STR_FR("Erreur d'E/S"),
		STR_IT("Errore di I/O"),
		STR_JP("入出力エラー"),
		STR_PT("Erro de E/S"),
		STR_NL("I/O Fout"),
		STR_KO("I/O 에러"),
		STR_RU("I/O-ошибка"),
	},

	[StrId_CouldNotOpenFile] =
	{
		STR_EN("Could not open file:\n%s"),
		STR_ES("No se pudo abrir el archivo:\n%s"),
		STR_DE("Konnte Datei nicht öffnen:\n%s"),
		STR_FR("Impossible d'ouvrir le fichier :\n%s"),
		STR_IT("Impossibile aprire il file:\n%s"),
		STR_JP("ファイルを開くことができませんでした：\n%s"),
		STR_PT("Não foi possível abrir o ficheiro:\n%s"),
		STR_NL("Kan bestand niet openen:\n%s"),
		STR_KO("파일을 열 수 없습니다:\n%s"),
		STR_RU("Не могу открыть файл:\n%s"),
	},

	[StrId_NoAppsFound_Title] =
	{
		STR_EN("No applications found"),
		STR_ES("No hay aplicaciones"),
		STR_DE("Keine Anwendungen gefunden"),
		STR_FR("Aucune application trouvée"),
		STR_IT("Nessun'applicazione trovata"),
		STR_JP("アプリが見つかりませんでした"),
		STR_PT("Não foram encontradas aplicações"),
		STR_NL("Geen toepassingen gevonden"),
		STR_KO("애플리케이션을 찾을 수 없습니다"),
		STR_RU("приложение не найдено"),
	},

	[StrId_NoAppsFound_Msg] =
	{
		STR_EN(
			"No applications could be found on the SD card.\n"
			"Make sure a folder named /3ds exists in the\n"
			"root of the SD card and it contains applications.\n"
		),
		STR_ES(
			"No se han podido encontrar aplicaciones en la\n"
			"tarjeta SD. Compruebe que haya una carpeta\n"
			"llamada /3ds y que contenga aplicaciones.\n"
		),
		STR_DE(
			"Auf der SD-Karte wurden keine Anwendungen\n"
			"gefunden. Stelle sicher, dass ein Verzeichnis\n"
			"namens /3ds im Wurzelverzeichnis der SD-Karte\n"
			"existiert und Anwendungen enthält!"
		),
		STR_FR(
			"Aucune application n'a été trouvée sur la carte\n"
			"SD. Veillez à ce qu'un dossier intitulé /3ds\n"
			"existe à la racine de la carte SD et à ce qu'il\n"
			"contienne des applications."
		),
		STR_IT(
			"Nessun'applicazione è stata trovata sulla scheda\n"
			"SD. Assicurati che esista una cartella chiamata\n"
			"/3ds nella root della scheda SD e che contenga\n"
			"delle applicazioni."
		),
		STR_JP(
			"SDカードにアプリケーションが見つかりませんでした。\n"
			"SDカードのルートに「/3ds」という名前のフォルダを\n"
			"作成してください。"
		),
		STR_PT(
			"Nenhuma aplicação foi encontrada no cartão SD.\n"
			"Certifique-se que uma pasta com o nome /3ds\n"
			"existe na raiz do cartão SD e que contêm\n"
			"aplicações."
		),
		STR_NL(
			"Geen toepassingen gevonden op de SD kaart.\n"
			"Zorg ervoor dat een map genaamd /3ds in de\n"
			"rootdirectory van de SD kaart aangemaakt is\n"
			"en de toepassingen bevat."
		),
		STR_KO(
			"애플리케이션을 SD 카드에서 찾을 수 없습니다.\n"
			"SD 카드 최상단에 /3ds 라는 이름의 폴더가 있는지,\n"
			"애플리케이션을 포함하고 있는지 확인해 주십시오."
		),
		STR_RU(
			"На SD-карте нет приложений.\n"
			"Убедитесь, что на карте SD есть каталог с\n"
			"названием 3ds и она содержит приложения."
		),
	},

	[StrId_Reboot] =
	{
		STR_EN(
			"Returning to \xEE\x81\xB3HOME is not available.\n"
			"You're about to reboot your console.\n\n"
			"  \xEE\x80\x80 Reboot\n"
			"  \xEE\x80\x81 Cancel"
		),
		STR_ES(
			"Volver a \xEE\x81\xB3HOME no está disponible.\n"
			"Está a punto de reiniciar su consola.\n\n"
			"  \xEE\x80\x80 Reiniciar\n"
			"  \xEE\x80\x81 Cancelar"
		),
		STR_DE(
			"Rückkehr zu \xEE\x81\xB3HOME nicht verfügbar.\n"
			"Deine Konsole wird neu gestartet.\n\n"
			"  \xEE\x80\x80 Neu starten\n"
			"  \xEE\x80\x81 Abbrechen"
		),
		STR_FR(
			"Retour au menu \xEE\x81\xB3HOME indisponible.\n"
			"Vous êtes sur le point de redémarrer\n"
			"votre console.\n\n"
			"  \xEE\x80\x80 Redémarrer\n"
			"  \xEE\x80\x81 Annuler"
		),
		STR_IT(
			"Ritorno al menu \xEE\x81\xB3HOME non disponibile.\n"
			"Stai per riavviare la tua console.\n\n"
			"  \xEE\x80\x80 Riavvia\n"
			"  \xEE\x80\x81 Annulla"
		),
		STR_JP(
			"\xEE\x81\xB3HOMEに戻ることはできません。\n"
			"コンソールが今すぐ再起動する。\n\n"
			"  \xEE\x80\x80 再起動\n"
			"  \xEE\x80\x81 キャンセル"
		),
		STR_PT(
			"Regressar para \xEE\x81\xB3HOME não está\n"
			"disponível. Está a reiniciar a sua consola.\n\n"
			"  \xEE\x80\x80 Reiniciar\n"
			"  \xEE\x80\x81 Cancelar"
		),
		STR_NL(
			"Terugkeren naar \xEE\x81\xB3HOME is niet\n"
			"beschikbaar.Wil je de console herstarten?\n\n"
			"  \xEE\x80\x80 Herstarten\n"
			"  \xEE\x80\x81 Annuleren"
		),
		STR_KO(
			"\xEE\x81\xB3홈으로 돌아갈 수 없습니다.\n"
			"당신의 기기를 리부팅 하려 합니다.\n\n"
			"  \xEE\x80\x80 리부팅\n"
			"  \xEE\x80\x81 취소"
		),
		STR_RU(
			"Возврат к \xEE\x81\xB3HOME недоступен.\n"
			"Вы собираетесь перезагрузить консоль.\n\n"
			"  \xEE\x80\x80 Перезагрузите\n"
			"  \xEE\x80\x81 Отмена"
		)
	},

	[StrId_ReturnToHome] =
	{
		STR_EN(
			"You're about to return to \xEE\x81\xB3HOME.\n\n"
			"  \xEE\x80\x80 Return\n"
			"  \xEE\x80\x81 Cancel\n"
			"  \xEE\x80\x82 Reboot"
		),
		STR_ES(
			"Está a punto de volver a \xEE\x81\xB3HOME.\n\n"
			"  \xEE\x80\x80 Volver\n"
			"  \xEE\x80\x81 Cancelar\n"
			"  \xEE\x80\x82 Reiniciar"
		),
		STR_DE(
			"Rückkehr zum \xEE\x81\xB3HOME-Menü.\n\n"
			"  \xEE\x80\x80 Fortfahren\n"
			"  \xEE\x80\x81 Abbrechen\n"
			"  \xEE\x80\x82 Konsole neustarten"
		),
		STR_FR(
			"Retour au menu \xEE\x81\xB3HOME.\n\n"
			"  \xEE\x80\x80 Continuer\n"
			"  \xEE\x80\x81 Annuler\n"
			"  \xEE\x80\x82 Redémarrer"
		),
		STR_IT(
			"Ritorno al menu \xEE\x81\xB3HOME.\n\n"
			"  \xEE\x80\x80 Continua\n"
			"  \xEE\x80\x81 Annulla\n"
			"  \xEE\x80\x82 Riavvia"
		),
		STR_JP(
			"あなたは今すぐ\xEE\x81\xB3HOMEに戻されます。\n\n"
			"  \xEE\x80\x80 戻る\n"
			"  \xEE\x80\x81 キャンセル\n"
			"  \xEE\x80\x82 再起動"
		),
		STR_PT(
			"Regressar ao menu \xEE\x81\xB3HOME.\n\n"
			"  \xEE\x80\x80 Regressar\n"
			"  \xEE\x80\x81 Cancelar\n"
			"  \xEE\x80\x82 Reiniciar"
		),
		STR_NL(
			"Je keert zo terug naar \xEE\x81\xB3HOME.\n\n"
			"  \xEE\x80\x80 Doorgaan\n"
			"  \xEE\x80\x81 Annuleren\n"
			"  \xEE\x80\x82 Herstarten"
		),
		STR_KO(
			"\xEE\x81\xB3홈으로 돌아가려 합니다.\n\n"
			"  \xEE\x80\x80 이동\n"
			"  \xEE\x80\x81 취소\n"
			"  \xEE\x80\x82 리부팅"
		),
		STR_RU(
			"Вы возвращаетесь в \xEE\x81\xB3HOME.\n\n"
			"  \xEE\x80\x80 Вернуть\n"
			"  \xEE\x80\x81 Отмена\n"
			"  \xEE\x80\x82 Перезагрузите"
		),
	},

	[StrId_TitleSelector] =
	{
		STR_EN("Title selector"),
		STR_ES("Selector de título"),
		STR_DE("Titel-Selektor"),
		STR_FR("Sélecteur de titre"),
		STR_IT("Selettore del titolo"),
		STR_JP("タイトルセレクタ"),
		STR_PT("Selector de Títulos"),
		STR_NL("Titel selector"),
		STR_KO("타이틀 선택기"),
		STR_RU("Селектор заголовков"),
	},

	[StrId_ErrorReadingTitleMetadata] =
	{
		STR_EN("Error reading title metadata.\n%08lX%08lX@%d"),
		STR_ES("Error leyendo los metadatos de los títulos.\n%08lX%08lX@%d"),
		STR_DE("Fehler beim lesen der Titel-Metadaten.\n%08lX%08lX@%d"),
		STR_FR(
			"Erreur lors de la lecture des métadonnées\n"
			"de titre.\n%08lX%08lX@%d"
		),
		STR_IT("Errore nella lettura dei metadata dei titoli.\n%08lX%08lX@%d"),
		STR_JP("タイトルメタデータを読み取ることができませんでした。\n%08lX%08lX@%d"),
		STR_PT("Erro a ler os metadados do título.\n%08lX%08lX@%d"),
		STR_NL("Fout bij het lezen van titel metadata.\n%08lX%08lX@%d"),
		STR_KO("타이틀 메타데이터를 읽는데 실패하였습니다.\n%08lX%08lX@%d"),
		STR_RU("Ошибка чтения метаданных заголовка\n.%08lX%08lX@%d"),
	},

	[StrId_NoTitlesFound] =
	{
		STR_EN("No titles could be detected."),
		STR_ES("No se han podido detectar títulos."),
		STR_DE("Keine Titel gefunden."),
		STR_FR("Aucun titre trouvé."),
		STR_IT("Nessun titolo trovato."),
		STR_JP("タイトルが見つかりませんでした。"),
		STR_PT("Nenhum título foi encontrado."),
		STR_NL("Geen titels gevonden."),
		STR_KO("타이틀을 찾지 못하였습니다."),
		STR_RU("Заголовки не обнаружены"),
	},

	[StrId_SelectTitle] =
	{
		STR_EN(
			"Please select a target title.\n\n"
			"  \xEE\x80\x80 Select\n"
			"  \xEE\x80\x81 Cancel"
		),
		STR_ES(
			"Elija el título de destino.\n\n"
			"  \xEE\x80\x80 Seleccionar\n"
			"  \xEE\x80\x81 Cancelar"
		),
		STR_DE(
			"Bitte wähle den Ziel-Titel aus.\n\n"
			"  \xEE\x80\x80 Auswählen\n"
			"  \xEE\x80\x81 Abbrechen"
		),
		STR_FR(
			"Veuillez sélectionner un titre de destination.\n\n"
			"  \xEE\x80\x80 Sélectionner\n"
			"  \xEE\x80\x81 Annuler"
		),
		STR_IT(
			"Seleziona il titolo di destinazione.\n\n"
			"  \xEE\x80\x80 Seleziona\n"
			"  \xEE\x80\x81 Annulla"
		),
		STR_JP(
			"ターゲットタイトルを選択してください。\n\n"
			"  \xEE\x80\x80 選択\n"
			"  \xEE\x80\x81 キャンセル"
		),
		STR_PT(
			"Por favor escolha um título alvo.\n\n"
			"  \xEE\x80\x80 Escolher\n"
			"  \xEE\x80\x81 Cancelar"
		),
		STR_NL(
			"Selecteer een titel.\n\n"
			"  \xEE\x80\x80 Selecteer\n"
			"  \xEE\x80\x81 Annuleren"
		),
		STR_KO(
			"대상 타이틀을 선택해 주십시오.\n\n"
			"  \xEE\x80\x80 선택\n"
			"  \xEE\x80\x81 취소"
		),
		STR_RU(
			"Выберите целевой заголовок.\n\n"
			"  \xEE\x80\x80 Выберите\n"
			"  \xEE\x80\x81 Отмена"
		),
	},

	[StrId_NoTargetTitleSupport] =
	{
		STR_EN(
			"This homebrew exploit does not have support\n"
			"for launching applications under target titles.\n"
			"Please use a different exploit."
		),
		STR_ES(
			"Este exploit de homebrew no tiene soporte para\n"
			"ejecutar aplicaciones bajo títulos de destino.\n"
			"Use otro exploit diferente."
		),
		STR_DE(
			"Dieser Homebrew-Exploit unterstützt das Starten\n"
			"von Anwendungen unter Ziel-Titeln nicht.\n"
			"Bitte verwende einen anderen Exploit."
		),
		STR_FR(
			"Cet exploit homebrew ne permet pas de lancer\n"
			"des applications sous des titres précis.\n"
			"Veuillez utiliser un exploit différent."
		),
		STR_IT(
			"Questo exploit homebrew non permette di avviare\n"
			"applicazioni in titoli specifici.\n"
			"Utilizza un exploit diverso."
		),
		STR_JP(
			"この自家製のエクスプロイトは、ターゲットタイトルの\n"
			"下でアプリを起動することができません。\n"
			"別のエクスプロイトを使用してください。"
		),
		STR_PT(
			"Este exploit homebrew não têm suporte\n"
			"para executar aplicações no título alvo.\n"
			"Por favor use um exploit diferente."
		),
		STR_NL(
			"Deze homebrew exploit heeft geen ondersteuning\n"
			"voor het starten van toepassingen met de gekozen titlel.\n"
			"Gebruik een andere exploit."
		),
		STR_KO(
			"이 홈브류 익스플로잇은 해당 타이틀에서 어플리케이션을\n"
			"실행시키는 것을 지원하지 않습니다.\n"
			"다른 익스플로잇을 사용해 주십시오."
		),
		STR_RU(
			"Этот эксплойт homebrew не поддерживает запуск\n"
			"приложений под целевыми заголовками.\n"
			"Пожалуйста, используйте другой эксплойт."
		),
	},

	[StrId_MissingTargetTitle] =
	{
		STR_EN(
			"The application you attempted to run requires\n"
			"a title that is not installed in the system."
		),
		STR_ES(
			"La aplicación seleccionada necesita un título\n"
			"que no está instalado en el sistema."
		),
		STR_DE(
			"Die ausgewählte Anwendung benötigt einen\n"
			"Titel der nicht installiert ist"
		),
		STR_FR(
			"L'application sélectionnée requiert un titre\n"
			"qui n'a pas été installé sur le système."
		),
		STR_IT(
			"L'applicazione selezionata richiede un titolo\n"
			"che non è installato nel sistema."
		),
		STR_JP(
			"このアプリを実行するために\n"
			"適切なタイトルがインストールされていません。"
		),
		STR_PT(
			"A aplicação que acabou de tentar executar requer\n"
			"um título que não está instalado neste sistema."
		),
		STR_NL(
			"De toepassing die je probeert te starten\n"
			"vereist een titel die niet geinstalleerd is."
		),
		STR_KO(
			"시도한 애플리케이션의 실행에 필요한 타이틀이\n"
			"시스템에 설치되어 있지 않습니다."
		),
		STR_RU(
			"Для приложения требуется зависимость,\n"
			"которая не установлена."
		),
	},

	[StrId_NetLoader] =
	{
		STR_EN("3dslink NetLoader"),
		STR_ES("Cargador de programas 3dslink"),
		STR_DE("3dslink Netzwerk-Loader"),
		STR_FR("Chargeur de programme 3dslink"),
		STR_IT("Caricamento programmi 3dslink"),
		STR_JP("3dslinkネットローダ"),
		STR_PT("Carregador de programas 3dslink"),
		STR_NL("3dslink netwerk lader"),
		STR_KO("3dslink 넷로더"),
		STR_RU("Загрузчик 3dslink"),
	},

	[StrId_NetLoaderUnavailable] =
	{
		STR_EN("The NetLoader is currently unavailable."),
		STR_ES("El cargador de programas no está disponible."),
		STR_DE("Der Netzwerk-Loader ist zur Zeit nicht verfügbar."),
		STR_FR("Le chargeur de programme 3dslink est indisponible."),
		STR_IT("Il caricamento programmi 3dslink non è disponibile."),
		STR_JP("3dslinkネットローダを利用できません。"),
		STR_PT("O carregador de programas está de momento indisponível."),
		STR_NL("De netwerk lader is niet beschikbaar."),
		STR_KO("넷로더는 현재 사용이 불가능 합니다."),
		STR_RU("Загрузчик в настоящее время недоступен."),
	},

	[StrId_NetLoaderError] =
	{
		STR_EN("An error occurred.\nTechnical details: [%s:%d]"),
		STR_ES("Ha ocurrido un error.\nDatos técnicos: [%s:%d]"),
		STR_DE("Ein Fehler ist aufgetreten\nTechnische Details: [%s:%d]"),
		STR_FR("Une erreur s'est produite.\nDétails techniques : [%s:%d]"),
		STR_IT("Si è verificato un errore.\nDettagli tecnici : [%s:%d]"),
		STR_JP("エラーが発生しました。\n技術的な詳細：[%s:%d]"),
		STR_PT("Ocorreu um erro.\nDetalhes técnicos: [%s:%d]"),
		STR_NL("Er is een fout opgetreden\nTechnische details: [%s:%d]"),
		STR_KO("에러가 발생했습니다.\n상세: [%s:%d]"),
		STR_RU("Произошла ошибка.\nТехнические подробности: [%s:%d]"),
	},

	[StrId_NetLoaderActive] =
	{
		STR_EN(
			"Waiting for 3dslink to connect…\n"
			"IP Addr: %lu.%lu.%lu.%lu, Port: %d\n\n"
			"  \xEE\x80\x81 Cancel"
		),
		STR_ES(
			"Esperando a que se conecte 3dslink…\n"
			"Dir.IP: %lu.%lu.%lu.%lu, Puerto: %d\n\n"
			"  \xEE\x80\x81 Cancelar"
		),
		STR_DE(
			"Warte auf Verbindung von 3dslink…\n"
			"IP Addr: %lu.%lu.%lu.%lu, Port: %d\n\n"
			"  \xEE\x80\x81 Abbrechen"
		),
		STR_FR(
			"En attente de la connexion de 3dslink…\n"
			"Adr. IP : %lu.%lu.%lu.%lu, Port : %d\n\n"
			"  \xEE\x80\x81 Annuler"
		),
		STR_IT(
			"In attesa della connessione di 3dslink…\n"
			"Ind. IP : %lu.%lu.%lu.%lu, Porta : %d\n\n"
			"  \xEE\x80\x81 Annullare"
		),
		STR_JP(
			"3dslinkが接続するのを待っている…\n"
			"IPアドレス：%lu.%lu.%lu.%lu, ポート番号：%d\n\n"
			"  \xEE\x80\x81 キャンセル"
		),
		STR_PT(
			"A aguardar pela conexão do 3dslink…\n"
			"End. IP: %lu.%lu.%lu.%lu, Porta: %d\n\n"
			"  \xEE\x80\x81 Cancelar"
		),
		STR_NL(
			"Wachten op 3dslink verbinding…\n"
			"IP Addr: %lu.%lu.%lu.%lu, Poort: %d\n\n"
			"  \xEE\x80\x81 Annuleren"
		),
		STR_KO(
			"3dslink 의 연결을 대기중…\n"
			"IP 주소: %lu.%lu.%lu.%lu, 포트: %d\n\n"
			"  \xEE\x80\x81 취소"
		),
		STR_RU(
			"Ожидание подключения 3dslink…\n"
			"айпи адрес: %lu.%lu.%lu.%lu, Порт: %d\n\n"
			"  \xEE\x80\x81 Отмена"
		)
	},

	[StrId_NetLoaderTransferring] =
	{
		STR_EN(
			"Transferring…\n"
			"%zu out of %zu KiB written"
		),
		STR_ES(
			"Transfiriendo…\n"
			"%zu de %zu KiB escritos"
		),
		STR_DE(
			"Übertragen…\n"
			"%zu von %zu KiB geschrieben"
		),
		STR_FR(
			"Transfert…\n"
			"%zu sur %zu Kio écrits"
		),
		STR_IT(
			"Trasferimento…\n"
			"%zu di %zu KiB scritti"
		),
		STR_JP(
			"データが転送されます…\n"
			"%zu / %zu KiB 書かれた"
		),
		STR_PT(
			"A transferir…\n"
			"%zu de %zu KiB escritos"
		),
		STR_NL(
			"Overbrengen…\n"
			"%zu van %zu KiB geschreven"
		),
		STR_KO(
			"전송중…\n"
			"%zu / %zu KiB 전송"
		),
		STR_RU(
			"Передача…\n"
			"%zu из %zu КИБ написано"
		),
	},
};
