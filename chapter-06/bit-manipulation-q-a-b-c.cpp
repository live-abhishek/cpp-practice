#include <iostream>
#include <cstdint>

int main()
{
    constexpr std::uint_fast8_t option_viewed{ 0x01 };
    constexpr std::uint_fast8_t option_edited{ 0x02 };
    constexpr std::uint_fast8_t option_favorited{ 0x04 };
    constexpr std::uint_fast8_t option_shared{ 0x08 };
    constexpr std::uint_fast8_t option_deleted{ 0x80 };

    std::uint_fast8_t myArticleFlags{ 0b1000'0100};
    std::cout << "Is article viewed?" << static_cast<bool>(myArticleFlags & option_viewed) << "\n";
    std::cout << "Marking article as viewed...\n";
    myArticleFlags |= option_viewed;
    std::cout << "Is article viewed?" << static_cast<bool>(myArticleFlags & option_viewed) << "\n";
    std::cout << "Is article deleted?" << static_cast<bool>(myArticleFlags & option_deleted) << "\n";
    std::cout << "Is article favorite?" << static_cast<bool>(myArticleFlags & option_favorited) << "\n";
    std::cout << "Removing article as favorite...\n";
    myArticleFlags &= ~option_favorited;
    std::cout << "Is article favorite?" << static_cast<bool>(myArticleFlags & option_favorited) << "\n";
    return 0;
}