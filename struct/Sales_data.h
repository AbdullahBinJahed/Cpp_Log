struct Sales_data
{
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};
echo -e "are you sure you want to delete the folder "$1": \c"
read confirmation
case $confirmation in
  y )
   rm -rf "$1"
   ;;
  Y )
   rm -rf "$1"
   ;;
  * )
   echo "Deletion cancelled"
   ;;
esac