// Дефинирайте enum константи за различните видове потребители на приложението - Owner, Admin, User
// enum Е_APP_USER
// {
// Е_OWNER = //...
// Е_ADMIN = //...
// Е_USER = //...
// };
// Използвайте стойностите от E_APP_PERMISSION_FLAGS и други стойности от Е_APP_USER (по-горни) за да дефинирате комбинации от различни опции за
// всеки потребител.
// Използвайте оператор | за комбиниране на опции и оператори & и ~ за изключване на опция. Примери:
// E_EDIT_BRAND_INFO | E_EDIT_VEHICLE_INFO // E_EDIT_BRAND_INFO И E_EDIT_VEHICLE_INFO
// Е_ADMIN &~EDIT_BRAND_INFO // каквото имаме за Е_ADMIN без EDIT_BRAND_INFO
// 0xff &~EDIT_BRAND_INFO // всичко без EDIT_BRAND_INFO
// Стартирайте приложението/main menu по подобен начин:
// start_app(Е_APP_USER_PERMISSION_LEVEL_USER );
// (На по-късен етап ще направим login меню, от което ще идва информацията за типа на потребителя)

enum E_APP_USER
{
    E_OWNER,
    E_ADMIN,
    E_USER
};

const uint8_t OWNER_PERMISSIONS = E_BOOK_VEHICLE | E_UNBOOK_VEHICLE | E_EDIT_VEHICLE_INFO | E_ADD_REMOVE_VEHICLE | E_EDIT_BRAND_INFO;
const uint8_t ADMIN_PERMISSIONS = E_BOOK_VEHICLE | E_UNBOOK_VEHICLE | E_EDIT_VEHICLE_INFO;
const uint8_t USER_PERMISSIONS = E_BOOK_VEHICLE | E_UNBOOK_VEHICLE;

uint8_t getUserPermissions(E_APP_USER userType)
{
    switch (userType)
    {
    case E_OWNER:
        return OWNER_PERMISSIONS;
    case E_ADMIN:
        return ADMIN_PERMISSIONS;
    case E_USER:
        return USER_PERMISSIONS;
    default:
        return 0;
    }
}

//-------------------------------------------------------//

// Set the allowed options for the current user
E_APP_PERMISSION_FLAGS allowed_options = 0;
switch (user_level)
{
    case E_OWNER:
        allowed_options = owner_options;
        break;
    case E_ADMIN:
        allowed_options = admin_options;
        break;
    case E_USER:
        allowed_options = user_options;
        break;
    default:
        // Handle error
        break;
}

// Show the main menu and allow the user to perform actions based on their allowed options
while (1)
{
    printf("\nMain Menu\n");
    printf("1. Book vehicle\n");
    if (allowed_options & E_BOOK_VEHICLE)
    {
        // Allow the user to book a vehicle
    }
    printf("2. Unbook vehicle\n");
    if (allowed_options & E_UNBOOK_VEHICLE)
    {
        // Allow the user to unbook a vehicle
    }
    printf("3. Edit vehicle information\n");
    if (allowed_options & E_EDIT_VEHICLE_INFO)
    {
        // Allow the user to edit vehicle information
    }
    printf("4. Add/Remove vehicle\n");
    if (allowed_options & E_ADD_REMOVE_VEHICLE)
    {
        // Allow the user to add/remove a vehicle
    }
    printf("5. Edit brand information\n");
    if (allowed_options & E_EDIT_BRAND_INFO)
    {
        // Allow the user to edit brand information
    }
    printf("6. Exit\n");

    // Get the user's choice
    int choice;
    scanf("%d", &choice);

    // Perform the selected action
    switch (choice)
    {
        case 1:
            if (allowed_options & E_BOOK_VEHICLE)
            {
                // Book vehicle
            }
            break;
        case 2:
            if (allowed_options & E_UNBOOK_VEHICLE)
            {
                // Unbook vehicle
            }
            break;
        case 3:
            if (allowed_options & E_EDIT_VEHICLE_INFO)
            {
                // Edit vehicle information
            }
            break;
        case 4:
            if (allowed_options & E_ADD_REMOVE
