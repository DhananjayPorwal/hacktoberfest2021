pragma solidity >= 0.7.0 < 0.9.0;

contract EmployeeNew {
    uint256 salary;
    
    constructor (uint256 sal) {
        salary = sal;
    } 
    
    function get() public virtual view returns(uint256 Salary) {
        return salary;
    }
}

contract Clerk is EmployeeNew(1200) {
    uint256 HRA;
    uint256 DA;
    uint256 TotalSalary;
    
    constructor () {
        HRA = (10 * super.get())/100;
        DA = (50 * super.get())/100;
    }
    
    function cal() public {
        
        TotalSalary = super.get() + HRA + DA;
    }
    
    function get() override(EmployeeNew) public view returns(uint256){
        return TotalSalary;
    }
}